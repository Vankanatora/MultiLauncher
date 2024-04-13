#include "LCD.h"

#include "graphics/GraphicsLCD.h"
#include "standart/standartLCD.h"


LiquidCrystal LCDManager::lcd = LiquidCrystal(7,6,5,4,3,2);

bool LCDManager::mustReturn = true;

void LCDManager::Run(void *pvParameters) {
    while (true) {
        standartLCD::Run(); 
    }
}

void LCDManager::Setup() {
    lcd.begin(16,2);
}