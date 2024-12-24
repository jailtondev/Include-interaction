#include <a_samp>
#include <menu-interaction>
#include <zcmd>

main()
{
	print("\nmenu-interaction\n");
}



CMD:menu(playerid)
{
    CreateMenuInteraction(playerid, 1, "Arthur", "Hey my friend, do you really want to sell your vehicle?", 268, "Confirm", "Cancel");
    return 1;
}

public OnPlayerMenuInteraction(playerid, menuid, bool:response)
{
    if(menuid == 1)
    {
        if(response) {
            SendClientMessage(playerid, -1, "Sim");
        } else {
            SendClientMessage(playerid, -1, "Nao");
        }
    }
    return 1;
}