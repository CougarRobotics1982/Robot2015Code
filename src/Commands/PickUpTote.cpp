// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "PickUpTote.h"
#include "../Commands/lPIDFloor.h"
PickUpTote::PickUpTote() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::liftR);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	low = new lPIDFloor();
}

// Called just before this Command runs the first time
void PickUpTote::Initialize() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZE
	Robot::liftR->Enable();
	Robot::liftR->SetSetpoint(12.0);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZE
}

// Called repeatedly when this Command is scheduled to run
void PickUpTote::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool PickUpTote::IsFinished() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
	return Robot::liftR->OnTarget();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
}

// Called once after isFinished returns true
void PickUpTote::End() {
	Robot::clamp->piston->Set(false);
	low->Start();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PickUpTote::Interrupted() {

}
