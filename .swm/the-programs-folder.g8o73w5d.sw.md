---
title: The programs folder
---
This folders contains the main thread and the files for it. All programs are stored in folders there and added to the menu.

# &nbsp;Menu

Used for displaying the menu for easy access for the user and launching the programs.

<SwmSnippet path="/src/programs/Menu.cpp" line="61">

---

&nbsp;

```c++
    static const int menuSize = sizeof(menuItems) / sizeof(menuItems[0]);
    while (true)
    {
        Menu::handleKeypadInput();
        if (hasChanged){
            LCDManager::lcd.clear();
            for (int i = 0; i < 2; i++){
                LCDManager::lcd.setCursor(0, i);
                if (i == 0){
                LCDManager::lcd.write(byte(1));
                LCDManager::lcd.setCursor(2, 0);
                }
                String description = menuItems[index + i].description;
                if (description != ""){LCDManager::lcd.print(menuItems[index + i].description);}
            }
            hasChanged = false;
        }
    }
```

---

</SwmSnippet>

There is a class struct called <SwmToken path="/src/programs/Menu.cpp" pos="5:2:2" line-data="struct menuItem {">`menuItem`</SwmToken>, which is ued to create a Menu list and each program to have a unique name in the menu display.

<SwmSnippet path="/src/programs/Menu.cpp" line="10">

---

&nbsp;

```c++
menuItem menuItems[] = {
  {"Space Invaders", SpaceInvaders::Run},
};
```

---

</SwmSnippet>

<SwmMeta version="3.0.0" repo-id="Z2l0aHViJTNBJTNBTXVsdGlMYXVuY2hlciUzQSUzQVZhbmthbmF0b3Jh" repo-name="MultiLauncher"><sup>Powered by [Swimm](https://app.swimm.io/)</sup></SwmMeta>
