#include "LCD.h"

#include "graphics/GraphicsLCD.h"
#include "standart/standartLCD.h"

bool LCDManager::GraphicsMode = false;

LiquidCrystal LCDManager::lcd = LiquidCrystal(7,6,5,4,3,2);

void LCDManager::Run(void *pvParameters) {
    while (true) {
        if (LCDManager::GraphicsMode) {
            GraphicsLCD::Run(lcd);
        }
        else {
            standartLCD::Run(lcd); 
        }
    }
}

void LCDManager::Setup() {
    lcd.begin(16,2);
}