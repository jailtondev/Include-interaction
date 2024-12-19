
#include <open.mp>


new Text: MenuInteraction[8];
new PlayerText: MenuInteractionPl[MAX_PLAYERS][5];

new MenuInt[MAX_PLAYERS];
new MenuTime[MAX_PLAYERS];

forward OnPlayerMenuInteraction(playerid, idmenu);

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
    TextDrawAlignment(MenuInteraction[0], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[0], 286397695);
    TextDrawUseBox(MenuInteraction[0], true);
    TextDrawBoxColour(MenuInteraction[0], 50);
    TextDrawSetShadow(MenuInteraction[0], 0);
    TextDrawSetOutline(MenuInteraction[0], 1);
    TextDrawBackgroundColour(MenuInteraction[0], 255);
    TextDrawFont(MenuInteraction[0], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[0], true);

    MenuInteraction[1] = TextDrawCreate(375.000, 194.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[1], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[1], 20.000, 21.000);
    TextDrawAlignment(MenuInteraction[1], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[1], 286397695);
    TextDrawUseBox(MenuInteraction[1], true);
    TextDrawBoxColour(MenuInteraction[1], 50);
    TextDrawSetShadow(MenuInteraction[1], 0);
    TextDrawSetOutline(MenuInteraction[1], 1);
    TextDrawBackgroundColour(MenuInteraction[1], 255);
    TextDrawFont(MenuInteraction[1], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[1], true);

    MenuInteraction[2] = TextDrawCreate(375.000, 289.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[2], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[2], 20.000, 20.000);
    TextDrawAlignment(MenuInteraction[2], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[2], 286397695);
    TextDrawUseBox(MenuInteraction[2], true);
    TextDrawBoxColour(MenuInteraction[2], 50);
    TextDrawSetShadow(MenuInteraction[2], 0);
    TextDrawSetOutline(MenuInteraction[2], 1);
    TextDrawBackgroundColour(MenuInteraction[2], 255);
    TextDrawFont(MenuInteraction[2], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[2], true);

    MenuInteraction[3] = TextDrawCreate(486.000, 194.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[3], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[3], 20.000, 21.000);
    TextDrawAlignment(MenuInteraction[3], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[3], 286397695);
    TextDrawUseBox(MenuInteraction[3], true);
    TextDrawBoxColour(MenuInteraction[3], 50);
    TextDrawSetShadow(MenuInteraction[3], 0);
    TextDrawSetOutline(MenuInteraction[3], 1);
    TextDrawBackgroundColour(MenuInteraction[3], 255);
    TextDrawFont(MenuInteraction[3], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[3], true);

    MenuInteraction[4] = TextDrawCreate(486.000, 289.500, "ld_beat:chit");
    TextDrawLetterSize(MenuInteraction[4], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[4], 20.000, 19.500);
    TextDrawAlignment(MenuInteraction[4], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[4], 286397695);
    TextDrawUseBox(MenuInteraction[4], true);
    TextDrawBoxColour(MenuInteraction[4], 50);
    TextDrawSetShadow(MenuInteraction[4], 0);
    TextDrawSetOutline(MenuInteraction[4], 1);
    TextDrawBackgroundColour(MenuInteraction[4], 255);
    TextDrawFont(MenuInteraction[4], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[4], true);

    MenuInteraction[5] = TextDrawCreate(502.500, 205.000, "LD_SPAC:white");
    TextDrawLetterSize(MenuInteraction[5], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[5], -124.000, 95.000);
    TextDrawAlignment(MenuInteraction[5], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[5], 286397695);
    TextDrawUseBox(MenuInteraction[5], true);
    TextDrawBoxColour(MenuInteraction[5], 50);
    TextDrawSetShadow(MenuInteraction[5], 0);
    TextDrawSetOutline(MenuInteraction[5], 1);
    TextDrawBackgroundColour(MenuInteraction[5], 255);
    TextDrawFont(MenuInteraction[5], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[5], true);

    MenuInteraction[6] = TextDrawCreate(386.000, 280.000, "LD_SPAC:white");
    TextDrawLetterSize(MenuInteraction[6], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[6], 38.000, 13.500);
    TextDrawAlignment(MenuInteraction[6], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[6], 579543807);
    TextDrawUseBox(MenuInteraction[6], true);
    TextDrawBoxColour(MenuInteraction[6], 50);
    TextDrawSetShadow(MenuInteraction[6], 0);
    TextDrawSetOutline(MenuInteraction[6], 1);
    TextDrawBackgroundColour(MenuInteraction[6], 255);
    TextDrawFont(MenuInteraction[6], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[6], true);
    TextDrawSetSelectable(MenuInteraction[6], true);

    MenuInteraction[7] = TextDrawCreate(430.000, 280.000, "LD_SPAC:white");
    TextDrawLetterSize(MenuInteraction[7], 0.600, 2.000);
    TextDrawTextSize(MenuInteraction[7], 38.000, 13.500);
    TextDrawAlignment(MenuInteraction[7], TEXT_DRAW_ALIGN_LEFT);
    TextDrawColour(MenuInteraction[7], -1962934017);
    TextDrawUseBox(MenuInteraction[7], true);
    TextDrawBoxColour(MenuInteraction[7], 50);
    TextDrawSetShadow(MenuInteraction[7], 0);
    TextDrawSetOutline(MenuInteraction[7], 1);
    TextDrawBackgroundColour(MenuInteraction[7], 255);
    TextDrawFont(MenuInteraction[7], TEXT_DRAW_FONT_SPRITE_DRAW);
    TextDrawSetProportional(MenuInteraction[7], true);
    TextDrawSetSelectable(MenuInteraction[7], true);
    return true;
}

#if defined _ALS_OnGameModeInit
  #undef OnGameModeInit
#else
  #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit HOOK_OnGameModeInit
#if defined HOOK_OnGameModeInit
  forward OnGameModeInit();
#endif


public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    if(clickedid == MenuInteraction[6]) //opcao1
    { 
        if(MenuTime[playerid] != 0)
        { 
            if(MenuInt[playerid] == 0) return 1;
            OnPlayerMenuInteraction(playerid, MenuInt[playerid]);
            HideMenu(playerid);
        }
    }
    if (clickedid == MenuInteraction[7]) //opcao2
    {
        if (MenuTime[playerid] != 0)
        {
            if (MenuInt[playerid] == 0) return 1;
            HideMenu(playerid);
        }
    }
    return true;
}

#if defined _ALS_OnPlayerClickTextDraw
  #undef OnPlayerClickTextDraw
#else
  #define _ALS_OnPlayerClickTextDraw
#endif
#define OnPlayerClickTextDraw HOOK_OnPlayerClickTextDraw
#if defined HOOK_OnPlayerClickTextDraw
  forward OnPlayerClickTextDraw(playerid, Text:clickedid);
#endif

forward HideMenu(playerid);
public HideMenu(playerid)
{
    if(MenuTime[playerid] != 0)
    {
        KillTimer(MenuTime[playerid]);
        MenuTime[playerid] = 0;
        CancelSelectTextDraw(playerid);
        for(new t; t < 8; t++)
        {
            TextDrawHideForPlayer(playerid, MenuInteraction[t]);
        }
        for(new t; t < 5; t++)
        {
            PlayerTextDrawHide(playerid, MenuInteractionPl[playerid][t]);
            PlayerTextDrawDestroy(playerid, MenuInteractionPl[playerid][t]);
        }
    }
    return true;
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
    SelectTextDraw(playerid, -1);
    MenuInt[playerid] = idmenu;
    PlayerTextDrawSetString(playerid, MenuInteractionPl[playerid][2], titulomenu);
    PlayerTextDrawSetString(playerid, MenuInteractionPl[playerid][3], mensagemmenu);
    PlayerTextDrawSetPreviewModel(playerid, MenuInteractionPl[playerid][4], skin);
    MenuTime[playerid] = SetTimerEx("HideMenu", 15000, false, "i", playerid);
    for(new t; t < 8; t++)
    {
        TextDrawShowForPlayer(playerid, MenuInteraction[t]);
    }
    for(new t; t < 5; t++)
    {
        PlayerTextDrawShow(playerid, MenuInteractionPl[playerid][t]);
    }
    return true;
}


stock CreateTextdrawManu(playerid, const opcao1[], const opcao2[])
{
    MenuInteractionPl[playerid][0] = CreatePlayerTextDraw(playerid, 404.000, 282.000, opcao1);
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][0], 0.147, 0.799);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][0], 400.000, 17.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][0], TEXT_DRAW_ALIGN_CENTER);
    PlayerTextDrawColour(playerid, MenuInteractionPl[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, MenuInteractionPl[playerid][0], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][0], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][0], true);

    MenuInteractionPl[playerid][1] = CreatePlayerTextDraw(playerid, 449.000, 282.000, opcao2);
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][1], 0.147, 0.799);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][1], 400.000, 17.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][1], TEXT_DRAW_ALIGN_CENTER);
    PlayerTextDrawColour(playerid, MenuInteractionPl[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, MenuInteractionPl[playerid][1], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][1], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][1], true);

    MenuInteractionPl[playerid][2] = CreatePlayerTextDraw(playerid, 386.000, 208.000, "Titulo");
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][2], 0.162, 0.900);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][2], 436.500, 66.500);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, MenuInteractionPl[playerid][2], 1097458175);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, MenuInteractionPl[playerid][2], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][2], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][2], true);

    MenuInteractionPl[playerid][3] = CreatePlayerTextDraw(playerid, 386.000, 223.000, "mensagem");
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][3], 0.162, 0.900);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][3], 474.500, 1.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, MenuInteractionPl[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, MenuInteractionPl[playerid][3], 255);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][3], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][3], true);

    MenuInteractionPl[playerid][4] = CreatePlayerTextDraw(playerid, 443.000, 169.000, "Preview_Model");
    PlayerTextDrawLetterSize(playerid, MenuInteractionPl[playerid][4], 0.600, 2.000);
    PlayerTextDrawTextSize(playerid, MenuInteractionPl[playerid][4], 112.500, 150.000);
    PlayerTextDrawAlignment(playerid, MenuInteractionPl[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, MenuInteractionPl[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, MenuInteractionPl[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, MenuInteractionPl[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, MenuInteractionPl[playerid][4], 0);
    PlayerTextDrawFont(playerid, MenuInteractionPl[playerid][4], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, MenuInteractionPl[playerid][4], true);
    PlayerTextDrawSetPreviewModel(playerid, MenuInteractionPl[playerid][4], 5);
    PlayerTextDrawSetPreviewRot(playerid, MenuInteractionPl[playerid][4], -10.000, 0.000, -18.000, 1.000);
    PlayerTextDrawSetPreviewVehicleColours(playerid, MenuInteractionPl[playerid][4], 1, 1);
    return true;
}