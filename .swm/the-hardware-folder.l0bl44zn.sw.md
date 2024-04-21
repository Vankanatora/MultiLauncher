---
title: The hardware folder
---
# &nbsp;<SwmToken path="/src/hardware/HardwareManager.h" pos="13:2:2" line-data="class HardwareManager {">`HardwareManager`</SwmToken>

We use a header file to make referencing easier:

<SwmSnippet path="/src/hardware/HardwareManager.h" line="13">

---

&nbsp;

```c
class HardwareManager {
public:
    //Keypad setup
    static Keypad keypad;

    // Setting pins states
    static void Setup();
};

```

---

</SwmSnippet>

An implementation of each function can be found in the .cpp having the same name as well as comments clarifying what's happening.

<SwmSnippet path="/src/hardware/HardwareManager.cpp" line="17">

---

&nbsp;

```c++
void HardwareManager::Setup() {
    pinMode(BUZZER, OUTPUT);

    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
}
```

---

</SwmSnippet>

## &nbsp;<SwmToken path="/src/hardware/LEDs/LEDs.h" pos="11:2:2" line-data="class LEDs {">`LEDs`</SwmToken>

Running in an independent loop due to the nature of the project this allows us to be able to change the LEDs fast, without having performance issues on execution.

<SwmSnippet path="/src/hardware/LEDs/LEDs.cpp" line="3">

---

&nbsp;

```c++
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
```

---

</SwmSnippet>

## &nbsp;LCD

We use it to control the LCD it's build in a way to provide ability for future improvements and function, since currently is very simple.

<SwmSnippet path="/src/hardware/display/LCD.cpp" line="11">

---

&nbsp;

```c++
void LCDManager::Run(void *pvParameters) {
    while (true) {
        standartLCD::Run(); 
    }
}
```

---

</SwmSnippet>

<SwmSnippet path="/src/hardware/display/standart/standartLCD.cpp" line="3">

---

&nbsp;

&nbsp;

```c++
void standartLCD::Run(){
    if (LCDManager::mustReturn) {
        IconManager::setupIcons(LCDManager::lcd);
        LCDManager::mustReturn = false;
    }
}
```

---

</SwmSnippet>

## &nbsp;Keypad

The keypad is defined in the <SwmToken path="/src/hardware/HardwareManager.h" pos="13:2:2" line-data="class HardwareManager {">`HardwareManager`</SwmToken> class as a static variable and can be used very easily using the "Keypad" library.

<SwmSnippet path="/src/hardware/HardwareManager.cpp" line="4">

---

&nbsp;

```c++
const byte KEYPAD_ROWS = 4;
const byte KEYPAD_COLS = 4;
byte rowPins[KEYPAD_ROWS] = {1, 0, A5, A4};
byte colPins[KEYPAD_COLS] = {A3, A2, 12, 13};
char keys[KEYPAD_ROWS][KEYPAD_COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

Keypad HardwareManager::keypad = Keypad(makeKeymap(keys), rowPins, colPins, KEYPAD_ROWS, KEYPAD_COLS);
```

---

</SwmSnippet>

<SwmMeta version="3.0.0" repo-id="Z2l0aHViJTNBJTNBTXVsdGlMYXVuY2hlciUzQSUzQVZhbmthbmF0b3Jh" repo-name="MultiLauncher"><sup>Powered by [Swimm](https://app.swimm.io/)</sup></SwmMeta>
