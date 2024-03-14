params [
	["_mode", "", [""]],
	["_winningNumbers", [], [[]]]  
];

waitUntil { !isNull findDisplay 2333 };

switch _mode do {
    case "DisplayInfo": {
        {
            ctrlSetText [1000 + _forEachIndex, str _x];
        } forEach _winningNumbers;
    };

    waitUntil {!dialog};
    _winningNumbers = [];
    scratcherNumbers = [];
};

    