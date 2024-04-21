#ifndef MemoryManager_H
#define MemoryManager_H

#include <Arduino.h>
#include <avr/pgmspace.h>

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

#endif //MemoryManager_H
