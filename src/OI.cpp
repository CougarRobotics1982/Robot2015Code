// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/LowestLevel.h"
#include "Commands/MoveLift.h"
#include "Commands/PickUpTote.h"
#include "Commands/ResetEncoderLift.h"
#include "Commands/TrashCanLevel.h"
#include "Commands/enableDrive.h"
#include "Commands/extendPiston.h"
#include "Commands/lFirstToteLevel.h"
#include "Commands/lFourthToteLevel.h"
#include "Commands/lPIDFloor.h"
#include "Commands/lSecondToteLevel.h"
#include "Commands/lThirdToteLevel.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	xbox = new Joystick(0);
	
	resetEncoder = new JoystickButton(xbox, 12);
	resetEncoder->WhenPressed(new ResetEncoderLift());
	pickUp = new JoystickButton(xbox, 2);
	pickUp->WhenPressed(new PickUpTote());
	liftMo = new JoystickButton(xbox, 5);
	liftMo->WhenPressed(new MoveLift());
	driveEnable = new JoystickButton(xbox, 11);
	driveEnable->WhenPressed(new enableDrive());
	pistonExtend = new JoystickButton(xbox, 1);
	pistonExtend->WhenPressed(new extendPiston());
	levelController = new Joystick(1);
	
	trashcanLevelButton = new JoystickButton(levelController, 4);
	trashcanLevelButton->WhenPressed(new TrashCanLevel());
	joystickButton1 = new JoystickButton(levelController, 2);
	joystickButton1->WhenPressed(new lPIDFloor());
	fourthLevel = new JoystickButton(levelController, 14);
	fourthLevel->WhenPressed(new lFourthToteLevel());
	thirdLevel = new JoystickButton(levelController, 13);
	thirdLevel->WhenPressed(new lThirdToteLevel());
	secondLevel = new JoystickButton(levelController, 12);
	secondLevel->WhenPressed(new lSecondToteLevel());
	firstLevel = new JoystickButton(levelController, 3);
	firstLevel->WhenPressed(new lFirstToteLevel());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("enableDrive", new enableDrive());

	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("lFirstToteLevel", new lFirstToteLevel());

	SmartDashboard::PutData("lSecondToteLevel", new lSecondToteLevel());

	SmartDashboard::PutData("lThirdToteLevel", new lThirdToteLevel());

	SmartDashboard::PutData("lFourthToteLevel", new lFourthToteLevel());

	SmartDashboard::PutData("extendPiston", new extendPiston());

	SmartDashboard::PutData("MoveLift", new MoveLift());

	SmartDashboard::PutData("PickUpTote", new PickUpTote());

	SmartDashboard::PutData("LowestLevel", new LowestLevel());

	SmartDashboard::PutData("lPIDFloor", new lPIDFloor());

	SmartDashboard::PutData("ResetEncoderLift", new ResetEncoderLift());

	SmartDashboard::PutData("TrashCanLevel", new TrashCanLevel());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getxbox() {
	return xbox;
}

Joystick* OI::getlevelController() {
	return levelController;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
