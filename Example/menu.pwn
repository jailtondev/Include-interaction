#include <a_samp>
#include <menu-interaction>
#include <zcmd>

main()
{
	print("\nmenu-interaction\n");
}



CMD:menu(playerid)
{
    CreateMenuInteraction(playerid, 1, "Arthur", "Opa meu amigo, Deseja mesmo vender seu veiculo?", 268, "Confirmar", "Cancelar");
    return 1;
}


public OnPlayerMenuInteraction(playerid, idmenu)
{
    if(idmenu == 1)
    {
        // Confirmar
    }
    return 1;
}
