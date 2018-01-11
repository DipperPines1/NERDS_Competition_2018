#include "AutoTurn.h"

AutoTurn::AutoTurn(double target_in, double rate_in) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drivetrain.get());
	rate = rate_in;
	target = target_in;
}

// Called just before this Command runs the first time
void AutoTurn::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutoTurn::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool AutoTurn::IsFinished() {
	if(angle == target){
		return true;
	}
	return false;
}

// Called once after isFinished returns true
void AutoTurn::End() {
	drivetrain->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoTurn::Interrupted() {
	drivetrain->Stop();
}
