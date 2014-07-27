/*
 * IGpioUnitTest.c
 *
 * Created: 27/07/2014 3:27:25 PM
 *  Author: Grant
 */ 
// include files
#include <avr/io.h>
#include <stdbool.h>
#include "factory/PlatformFactory.h"

// global variables

// constants

// file scope variables

// file scope functions


//////////////////////////////////////////////////////////////////////////
// Unit test function implementation
//////////////////////////////////////////////////////////////////////////

/// \description Unit test to ensure that IGpio interface implementation handles invalid parameters properly.
/// \retval	true	Unit test passed	
/// \retval false	Unit test failed
static bool TestInvalidParameters(void)
{
	return false;
}

/// \description Unit test to ensure that IGpio interface implementation supports Set and Clear functions.
/// \retval	true	Unit test passed
/// \retval false	Unit test failed
static bool TestGpioSetClear(void)
{
	return false;	
}

/// \description Unit test to ensure that IGpio interface implementation supports Toggle function.
/// \retval	true	Unit test passed
/// \retval false	Unit test failed
static bool TestGpioToggle(void)
{
	return false;	
}

/// \description Unit test to ensure that IGpio interface implementation supports Read function.
/// \retval	true	Unit test passed
/// \retval false	Unit test failed
static bool TestGpioRead(void)
{
	return false;	
}

/////////////////////////////////////////
int main(void)
{
	bool ret;
	PlatformFactory();
	
	ret = TestInvalidParameters();
	ret = TestGpioSetClear();
	ret = TestGpioToggle();
	ret = TestGpioRead();
}

