#ifndef BOARD_HW_H
#define BOARD_HW_H

#include <Arduino.h>

// AI Thinker ESP32-CAM normal red status LED is usually GPIO33 and active-low.
// GPIO4 is the white flash LED on many modules.
constexpr uint8_t BOARD_LED_GPIO = 33;
constexpr uint8_t BOARD_LED_ON_LEVEL = LOW;

void boardInitPowerLed();

#endif
