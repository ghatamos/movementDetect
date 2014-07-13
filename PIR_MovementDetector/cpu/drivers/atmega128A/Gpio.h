/// \description
/// Implements CPU level GPIO driver for the ATmega128A


#ifndef GPIO_H_
#define GPIO_H_
#include "cpu/Interfaces/IGpio.h"

// data structures

// constants

// API
extern IGpio_t gAt128AGpioInstance;

// simple constructor
void At128aGpioConstructor(void);
#endif /* GPIO_H_ */