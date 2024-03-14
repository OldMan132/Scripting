params [
	["_mode", "", [""]]  
];

switch _mode do {
    case "Start": {
        _winningNumbers = [];
        scratcherNumbers = [];
        _winningMatches = 0;

        while {count _winningNumbers < 5} do {
            _randomGeneration0 = floor random [0, 40, 99]; 
            if (_randomGeneration0 in _winningNumbers) then {} else {
                _winningNumbers pushBack _randomGeneration0;
            };
        };

        while {count scratcherNumbers < 16} do {
            _randomGeneration1 = floor random [0, 40, 99]; //Modify mid/max for better/worse odds
            if (_randomGeneration1 in scratcherNumbers) then {} else {
                scratcherNumbers pushBack _randomGeneration1;
            };
        };

        {
            _winningCheck = scratcherNumbers find _x;
            if (_winningCheck isNotEqualto -1) then {
                _winningMatches = _winningMatches + 1;
            };
        } forEach _winningNumbers;

        ["DisplayInfo", _winningNumbers] spawn TES_fnc_scratcherGUI;

        hint str _winningMatches; // You can use this value to calculate payout of something like 10k, 35k, 275k, 1.5M, 25M etc
    };
};