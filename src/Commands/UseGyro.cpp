// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "UseGyro.h"

UseGyro::UseGyro() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	onTarget = false;
}

// Called just before this Command runs the first time
void UseGyro::Initialize() {
	onTarget = false;
}

// Called repeatedly when this Command is scheduled to run
void UseGyro::Execute() {
	Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,-.25,0,Robot::driveTrain->gyro->GetAngle());
	printf("Angle %f\n", Robot::driveTrain->gyro->GetAngle());
	
}

// Make this return true when this Command no longer needs to run execute()
bool UseGyro::IsFinished() {
	return onTarget;
}

// Called once after isFinished returns true
void UseGyro::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void UseGyro::Interrupted() {

}
