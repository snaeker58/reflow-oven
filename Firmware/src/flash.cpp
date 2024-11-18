#include "flash.h"


void setConfigValue(const std::string& space, uint16_t value) {
    preferences.begin(space.c_str(), false);
    preferences.putUShort(space.c_str(), value);
    preferences.end();
}

uint16_t getConfigValue(const std::string& space) {
    uint16_t value = preferences.getUShort(space.c_str());
    return value;
}

void setState(const std::string& space, bool boolean) {
    preferences.begin(space.c_str(), false);
    preferences.putBool(space.c_str(), boolean);
    preferences.end();
}

bool getState(const std::string& space) {
    preferences.begin(space.c_str(), false);
    bool state = preferences.getBool(space.c_str());
    preferences.end();
    return state;
}