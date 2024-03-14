params [
	["_mode", "", [""]]
];

switch _mode do {
	case "TriggerEvent": {
		waitUntil {
			uiSleep 1;
			_detectHouse = player nearObjects 15;
			GB_hauntedHouse in _detectHouse;
		};
		["StalkingPhase1"] spawn TES_fnc_ghostEvent;
		hint "You feel cold chills down your neck as if you are being watch.";
	};
	case "StalkingPhase1": {
		
		GB_ghost = createAgent ["C_man_1", [0,0,0], [], 0, "NONE"];
		GB_ghost addUniform "U_I_C_Soldier_Bandit_2_F";
		removeHeadgear GB_ghost;
		GB_ghost addGoggles "G_balaclava_scarecrow_01";
		GB_ghost allowDamage false;
		GB_ghost disableAI "All";
		GB_ghost setDamage .95;
		_randomPos = [[[position player, 20]], []] call BIS_fnc_randomPos;
		GB_ghost setPos _randomPos;
		_dirPlayer = player getDirVisual GB_ghost;
		GB_ghost setDir _dirPlayer - 180; 

		occuranceTime = 10; //change to whatever
		while {occuranceTime > 0} do { 
			if ([getPosWorld player, getDirVisual player, 90, getPosWorld GB_ghost] call BIS_fnc_inAngleSector isEqualto true) then {
				["ChangePOS_StalkingPhase1"] spawn TES_fnc_ghostEvent;	
				_canSee = [objNull, "VIEW"] checkVisibility [eyePos player, eyePos GB_ghost];
				if (_canSee isEqualto 1) then {
					occuranceTime = occuranceTime - 1;
					_dirPlayer = player getDirVisual GB_ghost;
					GB_ghost setDir _dirPlayer - 180; 
				};
			};
			uiSleep 1; 
		};
		_pos = player modelToWorld [0,-1,0];
		GB_ghost setPos [_pos select 0, _pos select 1, _pos select 2];	
		_dirPlayer = player getDirVisual GB_ghost;
		GB_ghost setDir _dirPlayer - 180;
		uiSleep 0.7;
		GB_ghost setPos [0,0,0];
		uiSleep 15; //could give it a few minutes too
		["StalkingPhase2"] spawn TES_fnc_ghostEvent;
	};
	case "ChangePOS_StalkingPhase1": {
		_randomPos = [[[position player, 30]], []] call BIS_fnc_randomPos;
		GB_ghost setPos _randomPos;
		_dirPlayer = player getDirVisual GB_ghost;
		GB_ghost setDir _dirPlayer - 180; 
		uiSleep 1;
	};
	case "StalkingPhase2": {
		for "_i" from 1 to 7 do { 
			_randomPosPlyr = player getPos [4 * sqrt random 1, random 360];
			GB_ghost setPos _randomPosPlyr;
			_dirPlayer = player getDirVisual GB_ghost;
			GB_ghost setDir _dirPlayer - 180; 
			uiSleep .5;
		};
		GB_ghost setPos [0,0,0];
		uiSleep 15; //could give it a few minutes too
		["HuntingPhase"] spawn TES_fnc_ghostEvent;
	};
	case "HuntingPhase": {
		_pos = player modelToWorld [0,10,0];
		GB_ghost setPos [_pos select 0, _pos select 1, _pos select 2];
		hint "your being hunted RUNN!!";
		GB_huntTimer = 10;// Change to whatever
		while {GB_huntTimer > 0} do {
			_orgPos = getPos GB_ghost;
			_dirPlayer = player getDirVisual GB_ghost;
			GB_ghost setDir _dirPlayer - 180; 
			GB_ghost playMove "ApanPercMrunSnonWnonDf";
			uiSleep .75; 
			_newPos = getPos GB_ghost;
			GB_huntTimer = GB_huntTimer - .75;
			if (GB_ghost in nearestObjects [player, [], 2]) exitWith {["DeathPhase"] spawn TES_fnc_ghostEvent};
			if (_orgPos isEqualto _newPos) then {
				GB_findLoc = 0;
				while {GB_findLoc isEqualto 0} do { 
					_randomPosPlyr = player getPos [10 * sqrt random 1, random 360];
					if (nearestObjects [_randomPosPlyr, [], 2] isEqualto []) then {
					GB_ghost setPos _randomPosPlyr;
					GB_findLoc = 1;
					} else {hint "basapawn"};
					sleep .25;
				};
				GB_findLoc = 0;
			};
		};
		GB_ghost setPos [0,0,0];
		GB_ghost playMoveNow "";
	};
	case "DeathPhase": {
		titleText ["", "BLACK", 2];
		titleFadeOut 2;
		sleep 2;
		player setPos [21209,15420.6,0.50143909];
		player setDir 167.667;
		player action ["SWITCHWEAPON", player, player, -1];
		player enableSimulation false;
		player switchCamera "INTERNAL";
		GB_ghost attachTo [GB_GhostChair, [0, 0, -0.5]];
		GB_ghost setDir 348.664;
		GB_ghost switchMove "InBaseMoves_SittingRifle2";
		uiSleep 1.5;
		GB_LightSource setLightColor [2, 1, 1];	
		addCamShake [20, 2, 35];
		uiSleep 2;
		player setDamage 1;
	};
	GB_LightSource setLightColor [1, 1, 1];	
};
