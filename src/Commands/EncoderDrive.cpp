// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "EncoderDrive.h"

EncoderDrive::EncoderDrive(float feet) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	travelDistance = feet;
}

// Called just before this Command runs the first time
void EncoderDrive::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void EncoderDrive::Execute() {
	Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,-(Robot::driveTrain->speed),0);
	
}

// Make this return true when this Command no longer needs to run execute()
bool EncoderDrive::IsFinished() {
	return Robot::driveTrain->TestDistance(travelDistance);
}

// Called once after isFinished returns true
void EncoderDrive::End() {
	Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EncoderDrive::Interrupted() {
	Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,0,0);
}
