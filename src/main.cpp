// Libs
#include <Arduino.h>
#include <Arduino_FreeRTOS.h>

// Local Files
#include "pointers/Pointers.h"
#include "programs/Menu.h"

void setup() {
  Serial.begin(9800);
  HardwareManager::Setup();
  LCDManager::Setup();

  //Create Task for managing LEDs
  xTaskCreate(LEDs::Loop, "LEDs Task", 100, NULL, 1, &LEDsTask);
  xTaskCreate(LCDManager::Run, "LCD Task", 100, NULL, 1, &displayTask);
  xTaskCreate(Menu::Run, "Game Task", 100, NULL, 1, &gameTask);
  

  vTaskStartScheduler();
}

void loop() { }