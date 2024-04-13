#include "standartLCD.h"

void standartLCD::Run(){
    //TODO: IMPLEMENT if needed, else remove :D
    while (true)
    {
        if (LCDManager::mustReturn) {
            IconManager::setupIcons(LCDManager::lcd);
            LCDManager::mustReturn = false;
        }
        /* code */
    }
    
}