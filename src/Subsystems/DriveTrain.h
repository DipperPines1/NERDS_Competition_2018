#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <RobotDrive.h>
#include <AHRS.h>

class DriveTrain : public Subsystem {
public:
	DriveTrain();
	void InitDefaultCommand();
	void arcadeDrive(double, double);
	void Stop();
	double getAngle();
private:
	RobotDrive driveTrain;
	AHRS gyro;
};

#endif  // DriveTrain_H
