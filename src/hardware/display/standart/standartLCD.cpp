#include "standartLCD.h"

void standartLCD::Run(){
    if (LCDManager::mustReturn) {
        IconManager::setupIcons(LCDManager::lcd);
        LCDManager::mustReturn = false;
    }
}