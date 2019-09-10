// nimu_esp32.h

#ifndef _NIMU_ESP32_h
#define _NIMU_ESP32_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#define LED_BUILTIN 15
#define BUTTON_BUILTIN 0 
class NiMU
{
public:
	NiMU();
	~NiMU();
	void toggleLED();
	void setLED(bool state);
	uint8_t readBattery();
}
#endif

