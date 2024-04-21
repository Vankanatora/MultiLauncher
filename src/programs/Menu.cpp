#include "Menu.h"

bool hasChanged = true;

struct menuItem {
  String description;
  void (*functionPtr)();
};

menuItem menuItems[] = {
  {"Space Invaders", SpaceInvaders::Run},
};

int Menu::index = 0;

// Function to move to the next menu item
void Menu::nextMenuItem() {
    Menu::index++;
    if (Menu::index >= sizeof(menuItems) / sizeof(menuItems[0])) {
        Menu::index = sizeof(menuItems) / sizeof(menuItems[0]) - 1; // Wrap around to the beginning if we reach the end
    }
}

// Function to move to the previous menu item
void Menu::prevMenuItem() {
    Menu::index--;
    if (Menu::index < 0) {
        Menu::index = 0; // Wrap around to the end if we reach the beginning
    }
}

// Function to handle keypad input and navigate through the menu
void Menu::handleKeypadInput() {
    char key = HardwareManager::keypad.getKey(); // Get the key pressed

    if (key == 'C') {
        prevMenuItem(); // Move to the previous menu item
        hasChanged= true;
    } else if (key == 'D') {
        nextMenuItem(); // Move to the next menu item
        hasChanged= true;
    } else if (key == '*'){
        menuItems[index].functionPtr();
        IconManager::setupIcons(LCDManager::lcd);
        hasChanged=true;
    }
}

void Menu::Run(void *pvParameters) {
    for (size_t i = 0; i < 16; i++)
    {
        LCDManager::lcd.setCursor(i, 1);
        LCDManager::lcd.write(">");
        LCDManager::lcd.setCursor(i-1, 1);
        LCDManager::lcd.write("=");
        delay(50);
    }
    


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
}
