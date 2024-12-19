# 🚀 menu-interaction
A simple yet efficient include that facilitates player interaction through interactive textdraw/dialogs. It allows customization of options like Skin, Title, and Message in a dynamic and intuitive menu.

## 🔄 Update
Now with an improved design, support for customizing the "Yes" and "No" text and no need for the YSI library. Bugs fixed, now we have support for open-mp.

## 📅 Version
1.1

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


public OnPlayerMenuInteraction(playerid, idmenu)
{
    if(idmenu == 1)
    {
        // Confirm
    }
    return 1;
}

```


## Image
https://imgur.com/uOgRVNC

## Credits
@jailtondev
https://discord.gg/t3pZPUkPJ5
