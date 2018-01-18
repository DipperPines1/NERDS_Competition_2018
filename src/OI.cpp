#include "OI.h"
#include "RobotMap.h"

#include <WPILib.h>
#include "Commands/TestGyro.h"

OI::OI() :
	driver(JOY_DRIVER),
	driverA(&driver, BUTTON_A)
{
	// Process operator interface input here.
	driverA.WhenPressed(new TestGyro);
}

double OI::getAxis(int axis){
	return driver.GetRawAxis(axis);
}
