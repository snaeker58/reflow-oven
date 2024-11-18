//<App !Start!>
// FILE: [main.cpp]
// Created by GUIslice Builder version: [0.17.b34]
//
// GUIslice Builder Generated File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<App !End!>

#include "Arduino.h"
#include "gui.h"
#include "Preferences.h"
#include "flash.h"

Preferences preferences;

void setup()
{
  InitGUIslice();
}

// -----------------------------------
// Main event loop
// -----------------------------------
void loop()
{
  UpdateGUIslice();
}

