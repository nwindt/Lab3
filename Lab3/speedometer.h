#pragma once
#include "rt.h"
#include <iostream>

class speedometer : public ActiveClass {
public:
	speedometer(int num);
	void increment();
	void decrement();
	void Kill();
private:
	int number;
	int speed;
	int main(void);
	bool kill;

};