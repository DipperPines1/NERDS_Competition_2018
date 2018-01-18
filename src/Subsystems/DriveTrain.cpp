#include "DriveTrain.h"
#include "../RobotMap.h"

#include "../Commands/ArcadeDriveWithJoysticks.h"
#include <I2C.h>

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	leftController(DRIVE_LEFT),
	rightController(DRIVE_RIGHT),
	driveTrain(leftController, rightController),
	gyro(I2C::Port::kOnboard)
{

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new ArcadeDriveWithJoysticks);
}

void DriveTrain::arcadeDrive(double speed, double turn){
	driveTrain.ArcadeDrive(speed, turn);
}

void DriveTrain::Stop(){
	arcadeDrive(0,0);
}

double DriveTrain::getAngle(){
	return gyro.GetAngle();

}
