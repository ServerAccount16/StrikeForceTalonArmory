/*
  Adds a fullscreen looping video to the main menu.
  Called from RscDisplayMain onLoad.
*/
/*
params ["_display"];
if (isNull _display) exitWith {};

private _ctrl = _display ctrlCreate ["RscVideo", 88402];
_ctrl ctrlSetPosition [safeZoneX, safeZoneY, safeZoneW, safeZoneH];
_ctrl ctrlCommit 0;

// set the video file
_ctrl ctrlSetText "\x\strikeforcetalon_armory\addons\ui\video\menu.ogv";

// start playback (post‑fix form)
_ctrl ctrlPlayVideo;

// keep it looping
_ctrl ctrlAddEventHandler ["VideoStopped", {
    params ["_ctrl"];
    _ctrl ctrlPlayVideo;
}];
*/