#pragma once
#include "rt.h"
#include <iostream>
#define MAX_SPEED = 200

class Car : public ActiveClass
{

public:
	Car(int num);
	void Print();
	void SetVal(int num);
	void Accelerate();
	void Brake();
	void Cruise();

private:
	std::string action;
	int number;
	bool accelerate;
	bool brakes;
	int main(void);
};