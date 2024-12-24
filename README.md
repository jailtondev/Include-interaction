# 🚀 menu-interaction

A simple yet efficient include that facilitates player interaction through interactive textdraw/dialogs. It allows customization of options like Skin, Title, and Message in a dynamic and intuitive menu.

## 🔄 Update

Improved code.

## 📅 Version

1.2

## 🔌 Implementation

1. Download from (https://github.com/Jailtonvitor/Include-interaction.git)
2. Place the file in your include folder.
3. Add this line to your initial gamemode.

```pawn
#include <menu-interaction>
```

## ⚙ Functions

```pawn

CreateMenuInteraction(playerid, idmenu, const titulomenu[], const mensagemmenu[], skin, const opcao1[] = "Select", const opcao2[] = "Cancel")

```
## ♟ Example

```pawn

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
            SendClientMessage(playerid, -1, "Yes");
        } else {
            SendClientMessage(playerid, -1, "No");
        }
    }
    return 1;
}

```


## Image

https://imgur.com/uOgRVNC

## Credits

@jailtondev
https://discord.gg/t3pZPUkPJ5


## Contributors
@.ortex
@guil2k7 