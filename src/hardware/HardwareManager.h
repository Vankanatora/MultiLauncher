#ifndef HARDWARE_MANAGER_H
#define HARDWARE_MANAGER_H

#include <Arduino.h>
#include <Wire.h>
#include <Keypad.h>
#include "LEDs/LEDs.h"
#include "display/LCD.h"

//Pins setup
const static int BUZZER = 10;

class HardwareManager {
public:
    //Keypad setup
    static Keypad keypad;

    // Setting pins states
    static void Setup();
};

#endif // HARDWARE_MANAGER_H