// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutonomousCommand.h"
#include "../Commands/lFirstToteLevel.h"
#define SEC 50


AutonomousCommand::AutonomousCommand() {
	counter = 0;
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void AutonomousCommand::Initialize() {
	counter = 0;
	
}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute() {
	//CLAMP THE TOTE
	if(counter <= SEC*1)
	{
		RobotMap::clamppiston->Set(true);
	}

	//MOVE TOTE UP 7 INCHES
	else if(counter <= SEC*1.5)
	{
		(new lFirstToteLevel)->Start();
	}

	//MOVE BACK
	else if(counter <= SEC*2)
	{
		Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0.0,-0.5,0.0);
	}

	//STOP AND TURN 90 DEGREES
	else if(counter <= SEC*2.5)
	{
		Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0.0,0,.5,90.0);
	}

	//MOVE FORWARD
	else if(counter <= SEC*5)
	{
		Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0.0,0.8,0.0);
	}

	//STOP AND ROTATE ANOTHER 90 DEGREES
	else if(counter <= SEC*8)
	{
		Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0.0,0.0,0.5,90);
	}

	//DROP TOTE
	else if(counter <= SEC*9.5)
	{
		Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0.0,0.0,0.0);
		RobotMap::clamppiston->Set(false);
	}

	//BACK UP
	else if(counter <= SEC*10)
	{
		Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0.0,0.5,0.0);
	}

	//STOP
	else
	{
		Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0.0,0.0,0.0);
	}
	
	counter ++;
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonomousCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousCommand::Interrupted() {

}
