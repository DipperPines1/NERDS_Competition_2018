#include "CommandBase.h"

#include <Commands/Scheduler.h>
#include <networktables/NetworkTableInstance.h>

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
std::unique_ptr<nt::NetworkTableInstance> CommandBase::networkTable = std::make_unique<nt::NetworkTableInstance>(nt::NetworkTableInstance::GetDefault());
std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
std::unique_ptr<DriveTrain> CommandBase::drivetrain = std::make_unique<DriveTrain>();

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}
