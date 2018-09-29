#include "speedometer.h"

speedometer::speedometer(int num) {
	speed = 0;
	number = num;
	kill = false;
}

void speedometer::increment() {
	if (speed < 200)
		speed++;
}

void speedometer::decrement() {
	if (speed > 0)
		speed--;
}

void speedometer::Kill() {
	kill = true;
}

int speedometer::main(void) {
	while (!kill) {
		std::cout << "Speedometer Car : " << number << "  " << speed << "km/h" << std::endl;
		Sleep(2000);
	}

	return 0;
}