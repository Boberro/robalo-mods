//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_unit,_skillset);
_unit setSkill _skillset;
if (GVAR(debug) > 0) then {
	private "_type"; _type = _skillset select 0;
	diag_log format["%1 | Unit %2 sub-skill %3 set: %4, get: %5, skillFinal: %6",diag_ticktime,_unit,_type,_skillset select 1,_unit skill _type,_unit skillFinal _type];
};