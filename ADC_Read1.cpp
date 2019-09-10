// 
// 
// 

#include "ADC_Read1.h"

ADCRead::ADCRead(uint8_t pin, uint8_t bit_resolution, float ref_voltage)
{
	_pin = pin;
	pinMode(_pin, INPUT);
	_conversion = ref_voltage / (pow(2, bit_resolution) - 1);
}

ADCRead::~ADCRead()
{
}

uint16_t ADCRead::readRaw()
{
	return analogRead(_pin);
}
float ADCRead::readVoltage()
{
	return readRaw()*_conversion;
}