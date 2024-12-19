# 🚀 menu-interaction

Uma include simples, porém eficiente, que facilita a interação com jogadores por meio de textdraw/diálogos   interativos. Ela permite personalizar opções como Skin, Título e Mensagem em um menu dinâmico e intuitivo. 

## 🔄 Atualização

Agora com um design melhorado, suporte para personalizar o texto "Sim" e "Não" e sem necessidade da biblioteca YSI. Bugs corrigidos, agora temos suporte para open-mp.

## 📅 Versão

1.1

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


public OnPlayerMenuInteraction(playerid, idmenu)
{
    if(idmenu == 1)
    {
        // Confirmar
    }
    return 1;
}

```

## Imagem

https://imgur.com/uOgRVNC

## Creditos

@jailtondev
https://discord.gg/t3pZPUkPJ5
