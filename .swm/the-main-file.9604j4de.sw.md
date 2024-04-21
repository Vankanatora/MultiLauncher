---
title: The main file
---
# &nbsp;Main

In the main file we initialize the library "[freeRTOS](https://www.freertos.org/)", which we use for multitasking on the single core processor provided on the Arduino.

Whenever a program running on the "Game task" needs more performance it's able to stop any of the other needed task.

<SwmSnippet path="/src/main.cpp" line="1">

---

&nbsp;

```c++
// Libs
#include <Arduino.h>
#include <Arduino_FreeRTOS.h>

// Local Files
#include "pointers/Pointers.h"
#include "programs/Menu.h"

void setup() {
  Serial.begin(9600);
  HardwareManager::Setup();
  LCDManager::Setup();

  //Create Task for managing LEDs
  xTaskCreate(LEDs::Loop, "LEDs Task", 100, NULL, 1, &LEDsTask);
  xTaskCreate(LCDManager::Run, "LCD Task", 100, NULL, 1, &displayTask);
  xTaskCreate(Menu::Run, "Game Task", 100, NULL, 1, &gameTask);
  

  vTaskStartScheduler();
}

void loop() { }
```

---

</SwmSnippet>

<SwmMeta version="3.0.0" repo-id="Z2l0aHViJTNBJTNBTXVsdGlMYXVuY2hlciUzQSUzQVZhbmthbmF0b3Jh" repo-name="MultiLauncher"><sup>Powered by [Swimm](https://app.swimm.io/)</sup></SwmMeta>
