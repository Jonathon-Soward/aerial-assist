#include "WPILib.h"
#include "commands/ExampleCommand.h"
#include "CommandBase.h"

class Davros : public IterativeRobot {
private:
	Command *autonomousCommand;
	LiveWindow *lw;
	
	void RobotInit() {
		CommandBase::init();
		autonomousCommand = new ExampleCommand();
		lw = LiveWindow::GetInstance();
	}
	
	void AutonomousInit() {
		autonomousCommand->Start();
	}
	
	void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		autonomousCommand->Cancel();
	}
	
	void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	void TestPeriodic() {
		lw->Run();
	}
};

START_ROBOT_CLASS(Davros);

