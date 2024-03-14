[] spawn {
	waitUntil { !isNull findDisplay 46 };
};

GB_hauntedHouse = "Land_House_2W05_F" createVehicle [21208.9,15416.4,0.333975];
GB_hauntedHouse setDir 302.699;
GB_GhostChair = createVehicle ["Land_ArmChair_01_F", [0,0,0], [], 0, "NONE"];
GB_GhostChair setPos [21209.1,15417.1,0.50143909];
GB_GhostChair setDir 348.664;
GB_LightSource = createVehicle ["#lightpoint", GB_hauntedHouse modelToWorld [2, 2, 0]];
GB_LightSource setLightColor [1, 1, 1];	
GB_LightSource setLightBrightness .25;
GB_LightSource setLightIntensity 400;

["TriggerEvent"] spawn TES_fnc_ghostEvent;

/* A little guide to what's going on here, this script is a ghost hunt script where you are introduced to a ghost after you approach the ghost house close to the swamp.
There are many parts to the script, but there is first a stalking phase, then an appearance phase and finally a hunting phase.
If you are caught in the hunting phase you will be sent to the house to die! Took me a while to make, enjoy!
