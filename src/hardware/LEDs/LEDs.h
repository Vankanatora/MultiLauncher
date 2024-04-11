#include "Arduino.h"

//LEDs pin variables
const static int RED_LED_PIN = 8;
const static int GREEN_LED_PIN = 9;

//LEDs state variables
static bool RED_LED = false;
static bool GREEN_LED = true;

class LEDs {
    public:
        static void Loop(void *pvParameters);
};