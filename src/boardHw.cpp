#include "boardHw.h"

void boardInitPowerLed()
{
    pinMode(BOARD_LED_GPIO, OUTPUT);
    digitalWrite(BOARD_LED_GPIO, BOARD_LED_ON_LEVEL);
}
