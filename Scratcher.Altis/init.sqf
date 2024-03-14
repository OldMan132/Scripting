[] spawn {
	waitUntil { !isNull findDisplay 46 };
};

player addAction ["Open Scratcher", 
{
	["Start"] spawn TES_fnc_scratcher;
	createDialog "scrTemplate";
}];