// LED_Hander.h

#ifndef _LED_HANDER_h
#define _LED_HANDER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
class LED
{
public:
	LED(uint8_t pin, bool on_state);
		~LED();
	void setLED(bool state);
	void toggleLED();
	bool getLED();
protected:
	uint8_t _pin;
	bool _on_state;
	bool _state;

};


#endif

