#ifndef STANDART_LCD_H
#define STANDART_LCD_H

#include "LiquidCrystal.h"
#include "Icons/IconManager.h"

class standartLCD
{
public:
    static void Run(LiquidCrystal& lcd);
};
#endif // STANDART_LCD_H