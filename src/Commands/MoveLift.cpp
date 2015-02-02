// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "MoveLift.h"

MoveLift::MoveLift() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::liftR);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void MoveLift::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void MoveLift::Execute() {
	Robot::liftR->Disable();
	Joystick* js =Robot::oi->getxbox();
	float distance = Robot::liftR->quadratureEncoder->GetDistance();
	int count = Robot::liftR->quadratureEncoder->Get();
	float x;
	x = js->GetThrottle();
	Robot::liftR->lifter->Set(x);
	printf("Count: %i Distance: %f\n", count, distance);
	
}

// Make this return true when this Command no longer needs to run execute()
bool MoveLift::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MoveLift::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveLift::Interrupted() {

}
