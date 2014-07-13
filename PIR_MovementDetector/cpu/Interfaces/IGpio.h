/// \description
/// Generic interface for CPU level GPIO drivers


#ifndef IGPIO_H_
#define IGPIO_H_
#include <stdint.h> // for standard int type declaration
#include "common/types.h" // common types supported

// constants

// data structures
/// \enum
/// Supported GPIO configuration
typedef enum
{
	GPIO_IN_PULLUP,
	GPIO_IN_PULLDOWN,
	GPIO_OUT_HIGH,
	GPIO_OUT_LOW
}GpioDir_e;

/// \enum
/// Supported GPIO states
typedef enum
{
	GPIO_HIGH,
	GPIO_LOW	
}GpioState_e;

// API
typedef struct
{
	/// \description	Configures a IO for required operation	
	/// \param[in]	id	Driver specific ID to identify a GPIO
	/// \param[in]	dir	Direction and initial state of the GPIO	
	/// \retval	SUCCESS	successfully configured the GPIO
	/// \retval	INVALID_PARAM	one of the parameters passed is invalid
	ReturnCodes_e (*GpioEnable)(uint16_t id, GpioDir_e dir);

	/// \description	Set/Clear/Toggle a target GPIO
	/// \param[in]	id	Driver specific ID to identify a GPIO	
	/// \retval	SUCCESS	successfully set the GPIO to the desired state
	/// \retval	INVALID_PARAM the ID passed is not a valid ID supported by the driver
	ReturnCodes_e (*GpioSet)(uint16_t id);
	ReturnCodes_e (*GpioClear)(uint16_t id);
	ReturnCodes_e (*GpioToggle)(uint16_t id);
	
	/// \description	Reads the current state of the target GPIO
	/// \param[in]	id		Driver specific ID to identify a GPIO	
	/// \param[out]	state	Current state of the GPIO
	/// \retval	SUCCESS	successfully set the GPIO to the desired state
	/// \retval	INVALID_PARAM the ID passed is not a valid ID supported by the driver
	ReturnCodes_e (*GpioRead)(uint16_t id, GpioState_e *state);
}IGpio_t;
#endif /* IGPIO_H_ */