/// \description
/// Implements the CPU GPIO driver for the Atmega128A

// include files
#include "cpu/drivers/atmega128A/Gpio.h"

// global variables
IGpio_t gAt128AGpioInstance;

// constants

// file scope variables

// file scope functions
static ReturnCodes_e At128aGpioEnable(uint16_t id, GpioDir_e dir);
static ReturnCodes_e At128aGpioSet(uint16_t id);
static ReturnCodes_e At128aGpioClear(uint16_t id);
static ReturnCodes_e At128aGpioToggle(uint16_t id);
static ReturnCodes_e At128aGpioRead(uint16_t id, GpioState_e *state);

/////////////////////////////////////////
void At128aGpioConstructor(void)
{	
	gAt128AGpioInstance.GpioEnable = &At128aGpioEnable;
	gAt128AGpioInstance.GpioSet = &At128aGpioSet;
	gAt128AGpioInstance.GpioClear = &At128aGpioClear; 
	gAt128AGpioInstance.GpioToggle = &At128aGpioToggle;
	gAt128AGpioInstance.GpioRead = &At128aGpioRead;
}

//////////////////////////////////////////////////////////////////////////
// IGpio API implementation
//////////////////////////////////////////////////////////////////////////
static ReturnCodes_e At128aGpioEnable(uint16_t id, GpioDir_e dir)
{
	return NOT_IMPLEMENTED;	
}

static ReturnCodes_e At128aGpioSet(uint16_t id)
{
	return NOT_IMPLEMENTED;		
}

static ReturnCodes_e At128aGpioClear(uint16_t id)
{
	return NOT_IMPLEMENTED;		
}

static ReturnCodes_e At128aGpioToggle(uint16_t id)
{
	return NOT_IMPLEMENTED;		
}

static ReturnCodes_e At128aGpioRead(uint16_t id, GpioState_e *state)
{
	return NOT_IMPLEMENTED;
}
