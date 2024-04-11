#ifndef LCD_MANAGER_H
#define LCD_MANAGER_H

#include <LiquidCrystal.h>

class LCDManager {
public:
    static bool GraphicsData[80][16];
    static char StandartData[16][2];

    static bool GraphicsMode;

    static LiquidCrystal lcd;

    static void Setup();
    static void Run(void *pvParameters);
};
#endif // LCD_MANAGER_H