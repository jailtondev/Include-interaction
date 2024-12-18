
#include "a_samp"
#include "..\YSI-Includes\YSI_Coding\y_hooks"

new Text:MenuInteraction[10];
new PlayerText:MenuInteractionPl[MAX_PLAYERS][3];
new MenuInt[MAX_PLAYERS];
new MenuTime[MAX_PLAYERS];


/*

                    ooooooooo.   ooooo     ooo oooooooooo.  ooooo        ooooo   .oooooo.   
                    `888   `Y88. `888'     `8' `888'   `Y8b `888'        `888'  d8P'  `Y8b  
                    888   .d88'  888       8   888     888  888          888  888          
                    888ooo88P'   888       8   888oooo888'  888          888  888          
                    888          888       8   888    `88b  888          888  888          
                    888          `88.    .8'   888    .88P  888       o  888  `88b    ooo  
                    o888o           `YbodP'    o888bood8P'  o888ooooood8 o888o  `Y8bood8P'  


*/
hook OnGameModeInit()
{
    MenuInteraction[0] = TextDrawCreate(496.000000, 198.000000, "LD_SPAC:white");
    TextDrawFont(MenuInteraction[0], 4);
    TextDrawLetterSize(MenuInteraction[0], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[0], -110.500000, 108.500000);
    TextDrawSetOutline(MenuInteraction[0], 1);
    TextDrawSetShadow(MenuInteraction[0], 0);
    TextDrawAlignment(MenuInteraction[0], 1);
    TextDrawColor(MenuInteraction[0], 252645375);
    TextDrawBackgroundColor(MenuInteraction[0], 255);
    TextDrawBoxColor(MenuInteraction[0], 50);
    TextDrawUseBox(MenuInteraction[0], 1);
    TextDrawSetProportional(MenuInteraction[0], 1);
    TextDrawSetSelectable(MenuInteraction[0], 0);

    MenuInteraction[1] = TextDrawCreate(375.000000, 194.500000, "ld_beat:chit");
    TextDrawFont(MenuInteraction[1], 4);
    TextDrawLetterSize(MenuInteraction[1], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[1], 20.000000, 21.000000);
    TextDrawSetOutline(MenuInteraction[1], 1);
    TextDrawSetShadow(MenuInteraction[1], 0);
    TextDrawAlignment(MenuInteraction[1], 1);
    TextDrawColor(MenuInteraction[1], 252645375);
    TextDrawBackgroundColor(MenuInteraction[1], 255);
    TextDrawBoxColor(MenuInteraction[1], 50);
    TextDrawUseBox(MenuInteraction[1], 1);
    TextDrawSetProportional(MenuInteraction[1], 1);
    TextDrawSetSelectable(MenuInteraction[1], 0);

    MenuInteraction[2] = TextDrawCreate(375.000000, 289.500000, "ld_beat:chit");
    TextDrawFont(MenuInteraction[2], 4);
    TextDrawLetterSize(MenuInteraction[2], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[2], 20.000000, 21.000000);
    TextDrawSetOutline(MenuInteraction[2], 1);
    TextDrawSetShadow(MenuInteraction[2], 0);
    TextDrawAlignment(MenuInteraction[2], 1);
    TextDrawColor(MenuInteraction[2], 252645375);
    TextDrawBackgroundColor(MenuInteraction[2], 255);
    TextDrawBoxColor(MenuInteraction[2], 50);
    TextDrawUseBox(MenuInteraction[2], 1);
    TextDrawSetProportional(MenuInteraction[2], 1);
    TextDrawSetSelectable(MenuInteraction[2], 0);

    MenuInteraction[3] = TextDrawCreate(486.000000, 194.500000, "ld_beat:chit");
    TextDrawFont(MenuInteraction[3], 4);
    TextDrawLetterSize(MenuInteraction[3], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[3], 20.000000, 21.000000);
    TextDrawSetOutline(MenuInteraction[3], 1);
    TextDrawSetShadow(MenuInteraction[3], 0);
    TextDrawAlignment(MenuInteraction[3], 1);
    TextDrawColor(MenuInteraction[3], 252645375);
    TextDrawBackgroundColor(MenuInteraction[3], 255);
    TextDrawBoxColor(MenuInteraction[3], 50);
    TextDrawUseBox(MenuInteraction[3], 1);
    TextDrawSetProportional(MenuInteraction[3], 1);
    TextDrawSetSelectable(MenuInteraction[3], 0);

    MenuInteraction[4] = TextDrawCreate(486.000000, 289.500000, "ld_beat:chit");
    TextDrawFont(MenuInteraction[4], 4);
    TextDrawLetterSize(MenuInteraction[4], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[4], 20.000000, 20.500000);
    TextDrawSetOutline(MenuInteraction[4], 1);
    TextDrawSetShadow(MenuInteraction[4], 0);
    TextDrawAlignment(MenuInteraction[4], 1);
    TextDrawColor(MenuInteraction[4], 252645375);
    TextDrawBackgroundColor(MenuInteraction[4], 255);
    TextDrawBoxColor(MenuInteraction[4], 50);
    TextDrawUseBox(MenuInteraction[4], 1);
    TextDrawSetProportional(MenuInteraction[4], 1);
    TextDrawSetSelectable(MenuInteraction[4], 0);

    MenuInteraction[5] = TextDrawCreate(502.500000, 205.000000, "LD_SPAC:white");
    TextDrawFont(MenuInteraction[5], 4);
    TextDrawLetterSize(MenuInteraction[5], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[5], -124.000000, 95.000000);
    TextDrawSetOutline(MenuInteraction[5], 1);
    TextDrawSetShadow(MenuInteraction[5], 0);
    TextDrawAlignment(MenuInteraction[5], 1);
    TextDrawColor(MenuInteraction[5], 252645375);
    TextDrawBackgroundColor(MenuInteraction[5], 255);
    TextDrawBoxColor(MenuInteraction[5], 50);
    TextDrawUseBox(MenuInteraction[5], 1);
    TextDrawSetProportional(MenuInteraction[5], 1);
    TextDrawSetSelectable(MenuInteraction[5], 0);

    MenuInteraction[6] = TextDrawCreate(386.000000, 275.000000, "LD_SPAC:white");
    TextDrawFont(MenuInteraction[6], 4);
    TextDrawLetterSize(MenuInteraction[6], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[6], 29.000000, 13.500000);
    TextDrawSetOutline(MenuInteraction[6], 1);
    TextDrawSetShadow(MenuInteraction[6], 0);
    TextDrawAlignment(MenuInteraction[6], 1);
    TextDrawColor(MenuInteraction[6], 2094792959);
    TextDrawBackgroundColor(MenuInteraction[6], 255);
    TextDrawBoxColor(MenuInteraction[6], 50);
    TextDrawUseBox(MenuInteraction[6], 1);
    TextDrawSetProportional(MenuInteraction[6], 1);
    TextDrawSetSelectable(MenuInteraction[6], 1);

    MenuInteraction[7] = TextDrawCreate(422.000000, 275.000000, "LD_SPAC:white");
    TextDrawFont(MenuInteraction[7], 4);
    TextDrawLetterSize(MenuInteraction[7], 0.600000, 2.000000);
    TextDrawTextSize(MenuInteraction[7], 29.000000, 13.500000);
    TextDrawSetOutline(MenuInteraction[7], 1);
    TextDrawSetShadow(MenuInteraction[7], 0);
    TextDrawAlignment(MenuInteraction[7], 1);
    TextDrawColor(MenuInteraction[7], -1962934017);
    TextDrawBackgroundColor(MenuInteraction[7], 255);
    TextDrawBoxColor(MenuInteraction[7], 50);
    TextDrawUseBox(MenuInteraction[7], 1);
    TextDrawSetProportional(MenuInteraction[7], 1);
    TextDrawSetSelectable(MenuInteraction[7], 1);

    MenuInteraction[8] = TextDrawCreate(395.000000, 277.000000, "Sim");
    TextDrawFont(MenuInteraction[8], 1);
    TextDrawLetterSize(MenuInteraction[8], 0.187500, 0.900000);
    TextDrawTextSize(MenuInteraction[8], 400.000000, 17.000000);
    TextDrawSetOutline(MenuInteraction[8], 0);
    TextDrawSetShadow(MenuInteraction[8], 0);
    TextDrawAlignment(MenuInteraction[8], 1);
    TextDrawColor(MenuInteraction[8], 252645375);
    TextDrawBackgroundColor(MenuInteraction[8], 255);
    TextDrawBoxColor(MenuInteraction[8], 50);
    TextDrawUseBox(MenuInteraction[8], 0);
    TextDrawSetProportional(MenuInteraction[8], 1);
    TextDrawSetSelectable(MenuInteraction[8], 0);

    MenuInteraction[9] = TextDrawCreate(431.000000, 277.000000, "Nao");
    TextDrawFont(MenuInteraction[9], 1);
    TextDrawLetterSize(MenuInteraction[9], 0.187500, 0.900000);
    TextDrawTextSize(MenuInteraction[9], 400.000000, 17.000000);
    TextDrawSetOutline(MenuInteraction[9], 0);
    TextDrawSetShadow(MenuInteraction[9], 0);
    TextDrawAlignment(MenuInteraction[9], 1);
    TextDrawColor(MenuInteraction[9], 252645375);
    TextDrawBackgroundColor(MenuInteraction[9], 255);
    TextDrawBoxColor(MenuInteraction[9], 50);
    TextDrawUseBox(MenuInteraction[9], 0);
    TextDrawSetProportional(MenuInteraction[9], 1);
    TextDrawSetSelectable(MenuInteraction[9], 0);
    return true;
}




hook OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    if (clickedid == MenuInteraction[7]) // Não
    {
        if (MenuTime[playerid] != 0)
        {
            if (MenuInt[playerid] == 0) return 1;
            HideMenu(playerid);
        }
    }
    return true;
}

forward HideMenu(playerid);
public HideMenu(playerid)
{
    if(MenuTime[playerid] != 0)
    {
        KillTimer(MenuTime[playerid]);
        MenuTime[playerid] = 0;
        CancelSelectTextDraw(playerid);
        for(new t = 0; t < 10; t++)
        {
            TextDrawHideForPlayer(playerid, MenuInteraction[t]);
        }
        PlayerTextDrawHide(playerid, MenuInteractionPl[playerid][0]);
        PlayerTextDrawHide(playerid, MenuInteractionPl[playerid][1]);
        PlayerTextDrawHide(playerid, MenuInteractionPl[playerid][2]);
    }
    return 1;
} 


/*

                    .oooooo..o ooooooooooooo   .oooooo.     .oooooo.   oooo    oooo  .oooooo..o 
                    d8P'    `Y8 8'   888   `8  d8P'  `Y8b   d8P'  `Y8b  `888   .8P'  d8P'    `Y8 
                    Y88bo.           888      888      888 888           888  d8'    Y88bo.      
                    `"Y8888o.       888      888      888 888           88888[       `"Y8888o.  
                        `"Y88b      888      888      888 888           888`88b.         `"Y88b 
                    oo     .d8P      888      `88b    d88' `88b    ooo   888  `88b.  oo     .d8P 
                    8""88888P'      o888o      `Y8bood8P'   `Y8bood8P'  o888o  o888o 8""88888P'  

*/

stock CreateMenuInteraction(playerid, idmenu, const titulomenu[], const mensagemmenu[], skin)
{
    CreateTextdrawManu(playerid);
    SelectTextDraw(playerid, 0x00FF00FF);
    MenuInt[playerid] = idmenu;
    PlayerTextDrawSetString(playerid, MenuInteractionPl[playerid][0], titulomenu);
    PlayerTextDrawSetString(playerid, MenuInteractionPl[playerid][1], mensagemmenu);
    PlayerTextDrawSetPreviewModel(playerid, MenuInteractionPl[playerid][2], skin);
    MenuTime[playerid] = SetTimerEx("HideMenu", 15000, false, "i", playerid);
    PlayerTextDrawShow(playerid, MenuInteractionPl[playerid][0]);
    PlayerTextDrawShow(playerid, MenuInteractionPl[playerid][1]);
    PlayerTextDrawShow(playerid, MenuInteractionPl[playerid][2]);
    for(new t; t < 10; t++)
    {
        TextDrawShowForPlayer(playerid, MenuInteraction[t]);
    }
    return 1;
}


stock CreateTextdrawManu(playerid)
{
    MenuInteractionPl[playerid][0] = CreatePlayerTextDraw(playerid, 386.000000, 208.000000, "_"); // titulo
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][0], 1);
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][0], 0.162500, 0.900001);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][0], 436.500000, 66.500000);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][0], 0);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][0], 0);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][0], 1);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][0], 1097458175);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][0], 255);
    PlayerTextDrawBoxColor(playerid, MenuInteractionPl[playerid][0], 50);
    PlayerTextDrawUseBox(playerid, MenuInteractionPl[playerid][0], 0);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][0], 1);
    PlayerTextDrawSetSelectable(playerid, MenuInteractionPl[playerid][0], 0);

    MenuInteractionPl[playerid][1] = CreatePlayerTextDraw(playerid, 386.000000, 223.000000, "_");
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][1], 1);
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][1], 0.162500, 0.900001);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][1], 474.500000, 1.000000);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][1], 0);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][1], 0);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][1], 1);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][1], -1);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][1], 255);
    PlayerTextDrawBoxColor(playerid, MenuInteractionPl[playerid][1], 50);
    PlayerTextDrawUseBox(playerid, MenuInteractionPl[playerid][1], 0);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][1], 1);
    PlayerTextDrawSetSelectable(playerid, MenuInteractionPl[playerid][1], 0);

    MenuInteractionPl[playerid][2] = CreatePlayerTextDraw(playerid, 443.000000, 169.000000, "Preview_Model");
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][2], 5);
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][2], 0.600000, 2.000000);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][2], 112.500000, 150.000000);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][2], 1);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][2], -1);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawBoxColor(playerid, MenuInteractionPl[playerid][2], 255);
    PlayerTextDrawUseBox(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][2], 1);
    PlayerTextDrawSetSelectable(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawSetPreviewModel(playerid, MenuInteractionPl[playerid][2], 5);
    PlayerTextDrawSetPreviewRot(playerid, MenuInteractionPl[playerid][2], -10.000000, 0.000000, -18.000000, 1.000000);
    PlayerTextDrawSetPreviewVehCol(playerid, MenuInteractionPl[playerid][2], 1, 1);
    return 1;
}