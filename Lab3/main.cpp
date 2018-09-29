#include "car.h"
#include <iostream>
#include <vector>

//int main(void) {
//
//	Car *Cars[10];
//
//	for (int i = 0; i < 10; ++i) {
//		Cars[i] = new Car(i);
//	}
//
//	for (int i = 0; i < 10; ++i) {
//		Cars[i]->Resume();
//	}
//
//	for (int i = 0; i < 10; ++i) {
//		Cars[i]->WaitForThread();
//	}
//	
//	for (int i = 0; i < 10; i++)
//	{
//		delete Cars[i];
//	}
//
//	std::cout << "Finished" << std::endl;
//	Sleep(5000);
//}

int main(void) {

	Car car(1);

	std::cout << "Finished" << std::endl;
	car.Resume();
	car.Accelerate();
	Sleep(5000);
	car.Cruise();
	Sleep(5000);
	car.Brake();
	Sleep(2000);
	car.Cruise();
	car.WaitForThread();
}