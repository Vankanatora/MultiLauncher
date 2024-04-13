#include "SupperRunner.h"

bool SuperRunner::isRunning;

void SuperRunner::Run(){
    LCDManager::lcd.clear();

    while (SuperRunner::isRunning){
        SuperRunner::isRunning = false;
    }
    delay(1000);
}