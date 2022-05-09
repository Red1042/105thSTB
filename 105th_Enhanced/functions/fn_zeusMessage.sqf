/*
    Zeus messages

    Handles receiving and logging messages that are directed towards a zeus for roleplay or otherwise.
*/

params ["_channel", "_owner", "_from", "_text", "_person", "_name", "_strID", "_forcedDisplay", "_isPlayerMessage", "_sentenceType", "_chatMessageType"];

// Ensure you only message actual zeese
if (isNull (getAssignedCuratorLogic player)) exitWith {};

if !(["@zeese", _text,false] call BIS_fnc_inString) exitWith {};

_text = _text regexReplace ["@zeese",""];

v105_Enhanced_Zeus_Messages pushBack [time,_name,_text];

_first = true;
_message = "Roleplay messages: \n";
{
    if !(_first) then {
        _message = _message + "\n\n";
    } else {
        _first = false;
    };
    _delay = str (round(time - (_x select 0)));
    if(_delay == "0") then {
        _delay = "NOW";
    } else {
        _delay = _delay + "s";
    };
    _message = _message + format ["%1: %2,\n%3", _delay, _x select 1, _x select 2];
} forEach v105_Enhanced_Zeus_Messages;

hint _message;

sleep 120;
v105_Enhanced_Zeus_Messages deleteAt 0;