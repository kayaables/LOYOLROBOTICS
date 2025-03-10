using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor FrontDrive;
extern motor RightDrive;
extern motor BackDrive;
extern motor LeftDrive;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );