// --------------------------------------------------------------------------------------------------
// Knock unit down. Modified tmr_hiteffects which is based on the implementation in tpw_fall, by tpw.
// --------------------------------------------------------------------------------------------------
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
//diag_log format ["ASR AI3: fnc_fallDown BEGIN: %1",_unit];

if (!(isNull objectParent _unit) || {_unit getVariable ["tmr_falling", false]}) exitWith {};

// Don't fall when tpw_fall is enabled.
if (!isNil "tpw_fall_active" && {tpw_fall_active}) exitWith {};

// Get index for currently selected weapon type
private _cw = currentWeapon _unit;
private _wepType = 0;
call {
	if (_cw == primaryWeapon _unit) exitWith {_wepType = 2};
	if (_cw == handgunWeapon _unit) exitWith {_wepType = 1};
	if (_cw == secondaryweapon _unit) exitWith {_wepType = 3};
};

// Arrays of possible animations for each weapon type.
// Rifle
private _pw_fallarray = ["AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright","AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft"];
// Rifle, kneeling
private _knl_pw_fallarray = ["AadjPknlMstpSrasWrflDdown_AadjPpneMstpSrasWrflDup","AmovPknlMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft","AmovPknlMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright"];
// Launcher
private _sw_fallarray = ["AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon"];
// Launcher, kneeling
private _knl_sw_fallarray = ["AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon"];
// Handgun
private _hw_fallarray = ["AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft","AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright"];
// Handgun, kneeling
private _knl_hw_fallarray = ["AadjPknlMstpSrasWpstDdown_AadjPpneMstpSrasWpstDup","AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft","AmovPknlMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright"];
// No weapon
private _nw_fallarray = ["aparpercmstpsnonwnondnon_amovppnemstpsnonwnondnon"];
// No weapon, kneeling
private _knl_nw_fallarray = ["AmovPknlMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon"];

// Possible animations indexed by weapon type.
private _fallAnims = [_nw_fallarray, _hw_fallarray, _pw_fallarray, _sw_fallarray];
private _knl_fallAnims = [_knl_nw_fallarray, _knl_hw_fallarray, _knl_pw_fallarray, _knl_sw_fallarray];

private _stance = stance _unit;
_possibleAnims = call {
    // Play fall to ground animation
	if (_stance isEqualTo "STAND") exitWith {_fallAnims select _wepType};
    // Fall back to sitting position
	if (_stance isEqualTo "CROUCH") exitWith {_knl_fallAnims select _wepType};
    [];
};
if (_possibleAnims isEqualTo []) exitWith {};

// Mark that unit is falling
_unit setVariable ["tmr_falling", true];
private _aimcoef = getCustomAimCoef _unit;
private _anim = selectRandom _possibleAnims;
_unit setCustomAimCoef 1;
_unit switchMove _anim;

// Clear falling after 2 seconds and ensure that AI gets back to prone.
[_unit, _aimcoef] spawn {
    params ["_unit", "_aimcoef"];
	sleep 2;
    if (isNull _unit || {!alive _unit}) exitWith {};
	_unit setVariable ["tmr_falling", false];

	// Back to prone.
	if (_unit != call CBA_fnc_currentUnit) then {
		_unit playMoveNow "amovppnemstpsraswrfldnon";
	};
    // Restore sway
    _unit setCustomAimCoef _aimcoef;
};

//diag_log format ["ASR AI3: fnc_fallDown END: %1",_unit];
