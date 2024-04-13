#ifndef LCD_MANAGER_H
#define LCD_MANAGER_H

#include <LiquidCrystal.h>

class LCDManager {
public:
    static LiquidCrystal lcd;

    static bool mustReturn;

    static void Setup();
    static void Run(void *pvParameters);
};
#endif // LCD_MANAGER_H