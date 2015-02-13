// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "lThirdToteLevel.h"

lThirdToteLevel::lThirdToteLevel() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::liftR);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void lThirdToteLevel::Initialize() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZE
	Robot::liftR->Enable();
	Robot::liftR->SetSetpoint(36.0);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZE
}

// Called repeatedly when this Command is scheduled to run
void lThirdToteLevel::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool lThirdToteLevel::IsFinished() {
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
	return Robot::liftR->OnTarget();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ISFINISHED
}

// Called once after isFinished returns true
void lThirdToteLevel::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void lThirdToteLevel::Interrupted() {

}
