#pragma once

#include "car.h"
#include "speedometer.h"

Car::Car(int num) {
	number = num;
	action = "parked";
}

int Car::main(void)
{
	speedometer speed(number);
	speed.Resume();
	for (int i = 0; i < 1000; i++) {
		if (brakes) {
			speed.decrement();
		}
		if (accelerate) {
			speed.increment();
		}
		std::cout << "Sceeeerrchh | Car : " << number << "  " << action << std::endl;
		SLEEP(400);
	}
	speed.Kill();
	speed.WaitForThread();
	return 0;
}

void Car::Print() {
	std::cout << "Car number " << number << std::endl;
}

void Car::SetVal(int num) {
	number = num;
}

void Car::Accelerate() {
	accelerate = true;
	brakes = false;
	action = "Accelerating...";
}
void Car::Brake() {
	brakes = true;
	accelerate = false;
	action = "Braking...";

}

void Car::Cruise() {
	brakes = false;
	accelerate = false;
	action = "Crusing...";

}

