---
title: The memory folder
---
# &nbsp;Memory

It allows us to easily by calling a function and giving it value and an id it allows us to write to the flash memory for saving the data, even when there is power loss.

<SwmSnippet path="/src/memory/MemoryManager.h" line="7">

---

&nbsp;

```c
class FlashStorage {
public:
    template<typename T>
    static void writeToFlash(const T& value, size_t address) {
        memcpy_P((void*)address, &value, sizeof(value));
    }

    template<typename T>
    static T readFromFlash(size_t address) {
        T value;
        memcpy_P(&value, (void*)address, sizeof(value));
        return value;
    }
};
```

---

</SwmSnippet>

<SwmMeta version="3.0.0" repo-id="Z2l0aHViJTNBJTNBTXVsdGlMYXVuY2hlciUzQSUzQVZhbmthbmF0b3Jh" repo-name="MultiLauncher"><sup>Powered by [Swimm](https://app.swimm.io/)</sup></SwmMeta>
