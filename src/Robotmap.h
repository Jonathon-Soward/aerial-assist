#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// #define LEFTMOTOR 1
// #define RIGHTMOTOR 2

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// #define RANGE_FINDER_PORT 1
// #define RANGE_FINDER_MODULE 1

#define MOTOR_A_PWM 1
#define MOTOR_B_PWM 2
#define MOTOR_C_PWM 3
#define MOTOR_D_PWM 4

#define JOY_DRV_DEAD_X 0.05
#define JOY_DRV_DEAD_Y 0.05
#define JOY_DRV_DEAD_Z 0.05
#define JOY_DRV_DEAD_THROTTLE 0.05

#endif
