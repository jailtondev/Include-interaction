#include <a_samp>

static Text:MenuInteraction[8];
static PlayerText:MenuInteractionPl[MAX_PLAYERS][5];

static MenuInt[MAX_PLAYERS];
static MenuTime[MAX_PLAYERS];

forward OnPlayerMenuInteraction(playerid, menuid, bool:response);

/*

                    ooooooooo.   ooooo     ooo oooooooooo.  ooooo        ooooo   .oooooo.   
                    `888   `Y88. `888'     `8' `888'   `Y8b `888'        `888'  d8P'  `Y8b  
                    888   .d88'  888       8   888     888  888          888  888          
                    888ooo88P'   888       8   888oooo888'  888          888  888          
                    888          888       8   888    `88b  888          888  888          
                    888          `88.    .8'   888    .88P  888       o  888  `88b    ooo  
                    o888o           `YbodP'    o888bood8P'  o888ooooood8 o888o  `Y8bood8P'  


*/

public OnGameModeInit()
{
    MenuInteraction[0] = TextDrawCreate(496.000, 198.000, "LD_SPAC:white");
    TextDrawLetterSize(MenuInteraction[0], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[0], -110.500, 108.000);
    TextDrawAlignment(MenuInteraction[0], 1);
    TextDrawColor(MenuInteraction[0], 286397695);
    TextDrawUseBox(MenuInteraction[0], 1);
    TextDrawBoxColor(MenuInteraction[0], 50);
    TextDrawSetShadow(MenuInteraction[0], 0);
    TextDrawSetOutline(MenuInteraction[0], 1);
    TextDrawBackgroundColor(MenuInteraction[0], 255);
    TextDrawFont(MenuInteraction[0], 4);
    TextDrawSetProportional(MenuInteraction[0], 1);

    MenuInteraction[1] = TextDrawCreate(375.000, 194.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[1], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[1], 20.000, 21.000);
    TextDrawAlignment(MenuInteraction[1], 1);
    TextDrawColor(MenuInteraction[1], 286397695);
    TextDrawUseBox(MenuInteraction[1], 1);
    TextDrawBoxColor(MenuInteraction[1], 50);
    TextDrawSetShadow(MenuInteraction[1], 0);
    TextDrawSetOutline(MenuInteraction[1], 1);
    TextDrawBackgroundColor(MenuInteraction[1], 255);
    TextDrawFont(MenuInteraction[1], 4);
    TextDrawSetProportional(MenuInteraction[1], 1);

    MenuInteraction[2] = TextDrawCreate(375.000, 289.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[2], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[2], 20.000, 20.000);
    TextDrawAlignment(MenuInteraction[2], 1);
    TextDrawColor(MenuInteraction[2], 286397695);
    TextDrawUseBox(MenuInteraction[2], 1);
    TextDrawBoxColor(MenuInteraction[2], 50);
    TextDrawSetShadow(MenuInteraction[2], 0);
    TextDrawSetOutline(MenuInteraction[2], 1);
    TextDrawBackgroundColor(MenuInteraction[2], 255);
    TextDrawFont(MenuInteraction[2], 4);
    TextDrawSetProportional(MenuInteraction[2], 1);

    MenuInteraction[3] = TextDrawCreate(486.000, 194.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[3], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[3], 20.000, 21.000);
    TextDrawAlignment(MenuInteraction[3], 1);
    TextDrawColor(MenuInteraction[3], 286397695);
    TextDrawUseBox(MenuInteraction[3], 1);
    TextDrawBoxColor(MenuInteraction[3], 50);
    TextDrawSetShadow(MenuInteraction[3], 0);
    TextDrawSetOutline(MenuInteraction[3], 1);
    TextDrawBackgroundColor(MenuInteraction[3], 255);
    TextDrawFont(MenuInteraction[3], 4);
    TextDrawSetProportional(MenuInteraction[3], 1);

    MenuInteraction[4] = TextDrawCreate(486.000, 289.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[4], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[4], 20.000, 19.500);
    TextDrawAlignment(MenuInteraction[4], 1);
    TextDrawColor(MenuInteraction[4], 286397695);
    TextDrawUseBox(MenuInteraction[4], 1);
    TextDrawBoxColor(MenuInteraction[4], 50);
    TextDrawSetShadow(MenuInteraction[4], 0);
    TextDrawSetOutline(MenuInteraction[4], 1);
    TextDrawBackgroundColor(MenuInteraction[4], 255);
    TextDrawFont(MenuInteraction[4], 4);
    TextDrawSetProportional(MenuInteraction[4], 1);

    MenuInteraction[5] = TextDrawCreate(502.500, 205.000, "LD_SPAC:white");
    TextDrawLetterSize(MenuInteraction[5], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[5], -124.000, 95.000);
    TextDrawAlignment(MenuInteraction[5], 1);
    TextDrawColor(MenuInteraction[5], 286397695);
    TextDrawUseBox(MenuInteraction[5], 1);
    TextDrawBoxColor(MenuInteraction[5], 50);
    TextDrawSetShadow(MenuInteraction[5], 0);
    TextDrawSetOutline(MenuInteraction[5], 1);
    TextDrawBackgroundColor(MenuInteraction[5], 255);
    TextDrawFont(MenuInteraction[5], 4);
    TextDrawSetProportional(MenuInteraction[5], 1);

    MenuInteraction[6] = TextDrawCreate(386.000, 280.000, "LD_SPAC:white");
    TextDrawLetterSize(MenuInteraction[6], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[6], 38.000, 13.500);
    TextDrawAlignment(MenuInteraction[6], 1);
    TextDrawColor(MenuInteraction[6], 579543807);
    TextDrawUseBox(MenuInteraction[6], 1);
    TextDrawBoxColor(MenuInteraction[6], 50);
    TextDrawSetShadow(MenuInteraction[6], 0);
    TextDrawSetOutline(MenuInteraction[6], 1);
    TextDrawBackgroundColor(MenuInteraction[6], 255);
    TextDrawFont(MenuInteraction[6], 4);
    TextDrawSetProportional(MenuInteraction[6], 1);
    TextDrawSetSelectable(MenuInteraction[6], 1);

    MenuInteraction[7] = TextDrawCreate(430.000, 280.000, "LD_SPAC:white");
    TextDrawLetterSize(MenuInteraction[7], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[7], 38.000, 13.500);
    TextDrawAlignment(MenuInteraction[7], 1);
    TextDrawColor(MenuInteraction[7], -1962934017);
    TextDrawUseBox(MenuInteraction[7], 1);
    TextDrawBoxColor(MenuInteraction[7], 50);
    TextDrawSetShadow(MenuInteraction[7], 0);
    TextDrawSetOutline(MenuInteraction[7], 1);
    TextDrawBackgroundColor(MenuInteraction[7], 255);
    TextDrawFont(MenuInteraction[7], 4);
    TextDrawSetProportional(MenuInteraction[7], 1);
    TextDrawSetSelectable(MenuInteraction[7], 1);
    return true;
}

public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    if(clickedid == INVALID_TEXT_DRAW)
    {
        HideMenu(playerid);
    } else
    if(clickedid == MenuInteraction[6] || clickedid == MenuInteraction[7]) //opcao1
    { 
        if(MenuInt[playerid] != 0)
        { 
            CallLocalFunction("OnPlayerMenuInteraction", "iii", playerid, MenuInt[playerid], clickedid == MenuInteraction[6] ? true : false);
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
        for(new i; i < 8; i++)
        {
            if(i < 5) PlayerTextDrawHide(playerid, MenuInteractionPl[playerid][i]);
            TextDrawHideForPlayer(playerid, MenuInteraction[i]);
        }
    }
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

stock CreateMenuInteraction(playerid, idmenu, const titulomenu[], const mensagemmenu[], skin, const opcao1[] = "Selecionar", const opcao2[] = "Cancelar")
{
    CreateTextdrawManu(playerid, opcao1, opcao2);

    PlayerTextDrawSetString(playerid, MenuInteractionPl[playerid][2], titulomenu);
    PlayerTextDrawSetString(playerid, MenuInteractionPl[playerid][3], mensagemmenu);
    PlayerTextDrawSetPreviewModel(playerid, MenuInteractionPl[playerid][4], skin);
    MenuTime[playerid] = SetTimerEx("HideMenu", 15000, false, "i", playerid);

    SelectTextDraw(playerid, -1);
    MenuInt[playerid] = idmenu;

    for(new i; i < 8; i++)
    {
        if(i < 5) PlayerTextDrawShow(playerid, MenuInteractionPl[playerid][i]);
        TextDrawShowForPlayer(playerid, MenuInteraction[i]);
    }
}

static stock CreateTextdrawManu(playerid, const opcao1[], const opcao2[])
{
    MenuInteractionPl[playerid][0] = CreatePlayerTextDraw(playerid, 404.000, 282.000, opcao1);
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][0], 0.147, 0.799);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][0], 400.000, 17.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][0], 2);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][0], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][0], 1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][0], 1);

    MenuInteractionPl[playerid][1] = CreatePlayerTextDraw(playerid, 449.000, 282.000, opcao2);
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][1], 0.147, 0.799);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][1], 400.000, 17.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][1], 2);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][1], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][1], 1);

    MenuInteractionPl[playerid][2] = CreatePlayerTextDraw(playerid, 386.000, 208.000, "Titulo");
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][2], 0.162, 0.900);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][2], 436.500, 66.500);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][2], 1);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][2], 1097458175);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][2], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][2], 1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][2], 1);

    MenuInteractionPl[playerid][3] = CreatePlayerTextDraw(playerid, 386.000, 223.000, "mensagem");
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][3], 0.162, 0.900);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][3], 474.500, 1.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][3], 1);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][3], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][3], 1);

    MenuInteractionPl[playerid][4] = CreatePlayerTextDraw(playerid, 443.000, 169.000, "Preview_Model");
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][4], 0.600, 2.000);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][4], 112.500, 150.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][4], 1);
    PlayerTextDrawColor(playerid, MenuInteractionPl[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, MenuInteractionPl[playerid][4], 0);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][4], 5);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][4], 1);
    PlayerTextDrawSetPreviewModel(playerid, MenuInteractionPl[playerid][4], 5);
    PlayerTextDrawSetPreviewRot(playerid, MenuInteractionPl[playerid][4], -10.000, 0.000, -18.000, 1.000);
    PlayerTextDrawSetPreviewVehCol(playerid, MenuInteractionPl[playerid][4], 1, 1);
}

/*

                    ooo        ooooo       .o.         .oooooo.   ooooooooo.     .oooooo.    .oooooo..o 
                    `88.       .888'      .888.       d8P'  `Y8b  `888   `Y88.  d8P'  `Y8b  d8P'    `Y8 
                    888b     d'888      .8"888.     888           888   .d88' 888      888 Y88bo.      
                    8 Y88. .P  888     .8' `888.    888           888ooo88P'  888      888  `"Y8888o.  
                    8  `888'   888    .88ooo8888.   888           888`88b.    888      888      `"Y88b 
                    8    Y     888   .8'     `888.  `88b    ooo   888  `88b.  `88b    d88' oo     .d8P 
                    o8o        o888o o88o     o8888o  `Y8bood8P'  o888o  o888o  `Y8bood8P'  8""88888P'  

*/

#if defined MENU_INTERACTION_INCLUDED
  #endinput
#endif
#define MENU_INTERACTION_INCLUDED


#if defined _ALS_OnPlayerClickTextDraw
  #undef OnPlayerClickTextDraw
#else
  #define _ALS_OnPlayerClickTextDraw
#endif
#define OnPlayerClickTextDraw HOOK_OnPlayerClickTextDraw
#if defined HOOK_OnPlayerClickTextDraw
  forward OnPlayerClickTextDraw(playerid, Text:clickedid);
#endif

#if defined _ALS_OnGameModeInit
  #undef OnGameModeInit
#else
  #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit HOOK_OnGameModeInit
#if defined HOOK_OnGameModeInit
  forward OnGameModeInit();
#endif