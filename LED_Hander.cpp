// 
// 
// 

#include "LED_Hander.h"

#define ON 1
#define OFF 0

LED::LED(uint8_t pin, bool on_state)
{
	_pin = pin;
	_on_state = on_state;
	pinMode(_pin, OUTPUT);
}

LED::~LED()
{
}

void LED::setLED(bool state)
{
	if (state == ON)
	{
		digitalWrite(_pin, _on_state);
	}
	else if (state == OFF) 
	{
		digitalWrite(_pin,!_on_state);

	}
	digitalWrite(_pin, state);
}

void LED::toggleLED()
{
	digitalWrite(_pin,!getLED());
}

bool LED::getLED()
{
	_state = digitalRead(_pin);
	return _state;
	
}


