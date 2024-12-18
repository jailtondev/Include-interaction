
# menu-interaction

Uma include simples, porém eficiente, que facilita a interação com jogadores por meio de textdraw/diálogos   interativos. Ela permite personalizar opções como Skin, Título e Mensagem em um menu dinâmico e intuitivo. Atualmente na versão 1.0, futuras atualizações já estão planejadas para ampliar as funcionalidades. Espero que aproveitem e gostem!

## Implementação

1. Baixe o (https://github.com/alexchwoj/pawn-easing-functions/releases/latest)
2. Coloque o arquivo na sua pasta `include`.
3. Insira esta linha no sua gamemode inicial.
```pawn
#include <menu-interaction>
```

## Funções

CreateMenuInteraction(playerid, idmenu, titulomenu, mensagem, skin)

## Exemplo

```pawn
CMD:menu(playerid)
{
    CreateMenuInteraction(playerid, 1, "Arthur", "Opa meu amigo, Deseja mesmo vender seu veiculo?", 268);
    return 1;
}

CMD:menu2(playerid)
{
    CreateMenuInteraction(playerid, 2, "Jailton", "Ola, Deseja pegar o emprego de servente?", 2);
    return 1;
}


public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    if(clickedid == Menuinteracao[6]) //Sim
    { 
        if(MenuTime[playerid] != 0)
        { 
            if(MenuInt[playerid] == 0) return 1;

            if(MenuInt[playerid] == 1)
            {
                // Funcão Vender veiculo
            } 
            
            if(MenuInt[playerid] == 2)
            {
                // Funcão Aceitar emprego
            }
        }
    }
    return 1;
}

```

## Imagem

https://imgur.com/a/hDCSqnd

## Creditos

@jailtondev
https://discord.gg/t3pZPUkPJ5
