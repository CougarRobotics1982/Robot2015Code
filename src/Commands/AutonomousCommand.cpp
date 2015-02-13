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

AutonomousCommand::AutonomousCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void AutonomousCommand::Initialize() {
<<<<<<< HEAD
	Robot::driveTrain->gyro->Reset();

		RobotMap::clamppiston->Set(false);
		counter = 0;
		turnedCounter = 0;
		turned = false;
		testTime = 0;

	RobotMap::clamppiston->Set(false);
	counter = 0;
	turnedCounter = 0;
	turned = false;
	testTime = 0;

=======
	
>>>>>>> parent of 35017c1... Fixed Various Things... Github things...
}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute() {
<<<<<<< HEAD
<<<<<<< HEAD
	int autonomousmode = 1;

		switch(autonomousmode)
		{
		case 1:
			Autonomous1();
			break;
		case 2:

			break;
		case 3:

			break;
		}

	switch(autonomousmode)
	{
	case 1:
		Autonomous1();
		break;
	case 2:

		break;
	case 3:

		break;
	}

=======
	
>>>>>>> parent of 35017c1... Fixed Various Things... Github things...
=======
	switch (turnedCounter)
	{
		//if the robot hasn't turned yet
		//aka the beginning position
		case 0:
		{
			//grab the TOTE
			if (counter <=20)
				RobotMap::clamppiston->Set(true);

			//move the TOTE to the first level (about 7in off the ground)
			else if(counter <= 60)
				(new lFirstToteLevel)->Start();

			//move the robot back
			else if(counter <=100)
				Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,.2,0);

			//stop and turn the robot counter clockwise
			else if(counter <= 110)
				Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,0.0,0);
			else if(turned == false)
				turned = Robot::driveTrain->TurnTo(-90);

			break;
		}

		//if the robot's turned once
		//aka the robot's turned towards the autozone
		case 1:
		{
			//move the robot forward (towards the autozone)
			if(counter < 230 && counter > 10)
				Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,-.3,0);

			//stop and turn the robot clockwise
			else if(counter < 240)
				Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,0,0);
			else if(turned == false)
				turned = Robot::driveTrain->TurnTo(0);
			break;
		}

		//if the robot's turned twice
		//aka when the robot's in the autozone
		case 2:
		{
			//drop the TOTE
			if(counter < 110)
				RobotMap::clamppiston->Set(false);

			//back up out of the way
			else if(counter < 130)
				Robot::driveTrain->mecanum->MecanumDrive_Cartesian(0,0.3,0);
			break;
		}

	}
	//reset the counter when you turn the robot
	if(turned == true)
	{
		turned = false;
		turnedCounter ++;
		counter = 0;
	}
	testTime = time(NULL);
	printf("Time : %i\n", testTime);
	counter ++;
>>>>>>> parent of 52b118a... Good Lookin Autonomous
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
