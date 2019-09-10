// 
// 
// 

#include "nimu_esp32.h"

NiMU::NiMU():battery(BATTERY_PIN,12,3.3f)
{
	pinMode(LED_BUILTIN, OUTPUT);
	digitalWrite(LED_BUILTIN, LOW);
}

NiMU::~NiMU()
{}

void NiMU::toggleLED()
{
	digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
}

void NiMU::setLED(bool state)
{
	digitalWrite(LED_BUILTIN, !state);
}

uint8_t NiMU::readBattery()
{
	uint8_t battery_level = (battery.readRaw() - 1940) / 6;
	return battery_level;
}