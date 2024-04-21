#ifndef MENU_H
#define MENU_H

#include <Arduino.h>
#include <hardware/display/standart/Icons/IconManager.h>

#include "LCD.h"
#include "programs/SpaceInvaders/SpaceInvaders.h"
#include "hardware/HardwareManager.h"

class Menu
{
private:
    static void nextMenuItem();
    static void prevMenuItem();
    static void handleKeypadInput();
public:
    static int index;
    
    static void Run(void *pvParameters);
};

#endif // MENU_H
