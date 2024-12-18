#include <a_samp>
#include <menu-interaction>
#include <zcmd>

main()
{
	print("\nmenu-interaction\n");
}



CMD:menu(playerid)
{
    CreateMenuInteraction(playerid, 1, "Arthur", "Opa meu amigo, Deseja mesmo vender seu veiculo?", 268);
    return 1;
}


public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    if(clickedid == MenuInteraction[6]) //Sim
    { 
        if(MenuTime[playerid] != 0)
        { 
            if(MenuInt[playerid] == 0) return 1;

            if(MenuInt[playerid] == 1)
            {
                // Funcão Vender veiculo
            } 
        }
    }
    return 1;
}
