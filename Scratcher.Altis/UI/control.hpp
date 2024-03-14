class scrTemplate
{
    idd = 2333;
    
    class controls
    {
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by Jaymal, v1.063, #Tenufy)
        ////////////////////////////////////////////////////////

        class RscFrame_1800: RscPicture
        {
            idc = 1800;
            x = 0.34 * safezoneW + safezoneX;
            y = 0.258 * safezoneH + safezoneY;
            w = 0.3125 * safezoneW;
            h = 0.495 * safezoneH;
            text = "images\DXT5.paa";
        };
        class WinNum1: RscText
        {
            idc = 1000;
            text = "1"; //W1
            style = 2;
            font = "TahomaB";
            x = 0.417 * safezoneW + safezoneX;
            y = 0.397 * safezoneH + safezoneY;
            w = 0.0309758 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class WinNum2: RscText
        {
            idc = 1001;
            text = "2"; //W2
            style = 2;   
            font = "TahomaB";                    
            x = 0.449 * safezoneW + safezoneX;
            y = 0.397 * safezoneH + safezoneY;
            w = 0.0309758 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class WinNum3: RscText
        {
            idc = 1002;
            text = "3"; //W3
            style = 2;   
            font = "TahomaB";                     
            x = 0.481 * safezoneW + safezoneX;
            y = 0.397 * safezoneH + safezoneY;
            w = 0.0309758 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class WinNum4: RscText
        {
            idc = 1003;
            text = "4"; //W4
            style = 2;
            font = "TahomaB";                        
            x = 0.513 * safezoneW + safezoneX;
            y = 0.397 * safezoneH + safezoneY;
            w = 0.0309758 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class WinNum5: RscText
        {
            idc = 1004;
            text = "5"; //W5
            style = 2;  
            font = "TahomaB";                      
            x = 0.544 * safezoneW + safezoneX;
            y = 0.397 * safezoneH + safezoneY;
            w = 0.0309758 * safezoneW;
            h = 0.044 * safezoneH;
        };
        class ScrNum1: RscButton
        {
            idc = 1005;
            text = ""; //1
            font = "TahomaB"; 
            period = 0;
            colorBackground[] = {0,0,0,0.2};   
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3}; 
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.424 * safezoneW + safezoneX;
            y = 0.462 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1005, str (scratcherNumbers select 0)]";
        };
        class ScrNum2: RscButton
        {
            idc = 1006;
            text = ""; //2
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2}; 
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3}; 
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.4645 * safezoneW + safezoneX;
            y = 0.462 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1006, str (scratcherNumbers select 1)]";
        };
        class ScrNum3: RscButton
        {
            idc = 1007;
            text = ""; //3
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};  
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5045 * safezoneW + safezoneX;
            y = 0.462 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1007, str (scratcherNumbers select 2)]";
        };
        class ScrNum4: RscButton
        {
            idc = 1008;
            text = ""; //4
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};    
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};  
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};       
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5445 * safezoneW + safezoneX;
            y = 0.462 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1008, str (scratcherNumbers select 3)]";            
        };
        class ScrNum5: RscButton
        {
            idc = 1009;
            text = ""; //5
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};  
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3}; 
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};          
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.424 * safezoneW + safezoneX;
            y = 0.531 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1009, str (scratcherNumbers select 4)]";            
        };
        class ScrNum6: RscButton
        {
            idc = 1010;
            text = ""; //6
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};    
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3}; 
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};        
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.4645 * safezoneW + safezoneX;
            y = 0.531 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1010, str (scratcherNumbers select 5)]";            
        };
        class ScrNum7: RscButton
        {
            idc = 1011;
            text = ""; //7
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};    
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};     
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};    
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5045 * safezoneW + safezoneX;
            y = 0.531 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1011, str (scratcherNumbers select 6)]";             
        };     
        class ScrNum8: RscButton
        {
            idc = 1012;
            text = ""; //8
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};    
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};     
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};    
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5445 * safezoneW + safezoneX;
            y = 0.531 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1012, str (scratcherNumbers select 7)]";             
        };           
        class ScrNum9: RscButton
        {
            idc = 1013;
            text = ""; //9
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};    
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};    
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};     
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.424 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1013, str (scratcherNumbers select 8)]";             
        };
        class ScrNum10: RscButton
        {
            idc = 1014;
            text = ""; //10
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2}; 
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.4645 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1014, str (scratcherNumbers select 9)]";             
        };    
        class ScrNum11: RscButton
        {
            idc = 1015;
            text = ""; //11
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2}; 
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};  
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};          
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5045 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1015, str (scratcherNumbers select 10)]";             
        };     
        class ScrNum12: RscButton
        {
            idc = 1016;
            text = ""; //12
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5445 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1016, str (scratcherNumbers select 11)]";             
        };               
        class ScrNum13: RscButton
        {
            idc = 1017;
            text = ""; //13
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.424 * safezoneW + safezoneX;
            y = 0.668 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1017, str (scratcherNumbers select 12)]";             
        };
        class ScrNum14: RscButton
        {
            idc = 1018;
            text = ""; //14
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.4645 * safezoneW + safezoneX;
            y = 0.668 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1018, str (scratcherNumbers select 13)]";             
        };
        class ScrNum15: RscButton
        {
            idc = 1019;
            text = ""; //15
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5045 * safezoneW + safezoneX;
            y = 0.668 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1019, str (scratcherNumbers select 14)]";             
        };
        class ScrNum16: RscButton
        {
            idc = 1020;
            text = ""; //16
            font = "TahomaB";
            period = 0;
            colorBackground[] = {0,0,0,0.2};
            colorBackgroundActive[] = {0.98,0.976,0.675,0.3};
            soundClick[] = {"a3\sounds_f_exp\characters\footsteps\straw_run_7.wss",0.18,1};
            sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
            x = 0.5445 * safezoneW + safezoneX;
            y = 0.668 * safezoneH + safezoneY;
            w = 0.0224 * safezoneW;
            h = 0.035 * safezoneH;
            action = "ctrlSetText [1020, str (scratcherNumbers select 15)]";             
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////
    };
};

