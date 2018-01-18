#ifndef OI_H
#define OI_H

#include <Joystick.h>
#include <Buttons/JoystickButton.h>

class OI {
public:
	OI();
	double getAxis(int);
private:
	Joystick driver;
	JoystickButton driverA;
};

#endif  // OI_H
