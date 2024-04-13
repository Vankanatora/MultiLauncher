#ifndef KeypadManager_H
#define KeypadManager_H

#include <Arduino.h>
#include <LiquidCrystal.h>

#include "programs/SupperRunner/SupperRunner.h"
#include "hardware/HardwareManager.h"

class KeypadManager
{
public:
    static char handleKeypadInput();
};

#endif // KeypadManager_H
