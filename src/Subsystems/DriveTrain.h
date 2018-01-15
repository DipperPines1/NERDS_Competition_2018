#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <RobotDrive.h>
#include <Encoder.h>

class DriveTrain : public Subsystem {
public:
	enum encoderSide{
		kLeft,
		kRight
	};
	DriveTrain();
	void InitDefaultCommand();
	void arcadeDrive(double, double);
	void Stop();
	double getEncoderValue(encoderSide);
private:
	RobotDrive driveTrain;
	Encoder Lencoder;
	Encoder Rencoder;
};

#endif  // DriveTrain_H
