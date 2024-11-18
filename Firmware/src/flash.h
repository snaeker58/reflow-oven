#ifndef FLASH_H
#define FLASH_H

#include "Preferences.h"
#include "cstdint"
#include "string"

extern Preferences preferences;

void setConfigValue(const std::string& space, uint16_t value);
uint16_t getConfigValue(const std::string& space);
void setState(const std::string& space, bool boolean);
bool getState(const std::string& space);

#endif // FLASH_H