#include "LEDs.h"

void LEDs::Loop(void *pvParameters) {
    while (true) {
        //Green LED
        if (GREEN_LED){
            digitalWrite(GREEN_LED_PIN, HIGH);
        }
        if (!GREEN_LED){
            digitalWrite(GREEN_LED_PIN, LOW);
        }

        // Red LED
        if (RED_LED){
            digitalWrite(RED_LED_PIN, HIGH);
        }
        if (!RED_LED){
            digitalWrite(RED_LED_PIN, LOW);
        }
    }
}