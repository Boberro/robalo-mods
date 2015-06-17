//hit EH: remove gimps; switch to combat; go to cover
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_unit,_hitman);
if (GVAR(enabled) != 1 || {isPlayer _unit} || {_unit == missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull]}) exitWith {};

if (local _unit && {_unit call FUNC(isValidUnitC)}) then {

	// move to cover
	[_unit,_hitman,diag_ticktime,20] call FUNC(moveToCover);

	if ({isPlayer _x} count units (group _unit) == 0) then {
		if (_unit != _hitman) then {
			if ((behaviour _unit) in ["SAFE","AWARE"]) then {_unit setBehaviour "COMBAT"};
		};
		if (GVAR(removegimps) > 0) then {_unit spawn FUNC(removeGimp)};
	};

};
