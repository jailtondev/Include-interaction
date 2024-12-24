
# 🚀 menu-interaction

Uma include simples, porém eficiente, que facilita a interação com jogadores por meio de textdraw/diálogos   interativos. Ela permite personalizar opções como Skin, Título e Mensagem em um menu dinâmico e intuitivo. 

## 🔄 Atualização

Código melhorado.

## 📅 Versão

1.2

## 🔌 Implementação

1. Baixe o (https://github.com/Jailtonvitor/Include-interaction.git)
2. Coloque o arquivo na sua pasta `include`.
3. Insira esta linha no sua gamemode inicial.
```pawn
#include <menu-interaction>
```

## ⚙ Funções

CreateMenuInteraction(playerid, idmenu, const titulomenu[], const mensagemmenu[], skin, const opcao1[] = "Selecionar", const opcao2[] = "Cancelar")

## ♟ Exemplo

```pawn

CMD:menu(playerid)
{
    CreateMenuInteraction(playerid, 1, "Arthur", "Opa meu amigo, Deseja mesmo vender seu veiculo?", 268, "Confirmar", "Cancelar");
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
```

## Imagem

https://imgur.com/uOgRVNC

## Creditos

@jailtondev
https://discord.gg/t3pZPUkPJ5

## Contribuidores
@.ortex
@guil2k7 