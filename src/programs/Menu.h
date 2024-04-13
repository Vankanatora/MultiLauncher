#ifndef MENU_H
#define MENU_H

#include <Arduino.h>

#include "LCD.h"
#include "programs/SupperRunner/SupperRunner.h"
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
