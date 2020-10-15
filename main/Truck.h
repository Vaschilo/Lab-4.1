#pragma once
#include "Car.h"

class Truck :public Car
{
private:
	int tonnage;
public:
	Truck() {}
	Truck(string* model, int numofcyl, int power, int tonnage)
	{
		this->model = model;
		this->numofcyl = numofcyl;
		this->power = power;
		this->tonnage = tonnage;
	}
	~Truck() {}

	void SetTonnage(int tonnage) { this->tonnage = tonnage; }
	auto GetTonnage() { return this->tonnage; }
	void print()
	{
		Car::print();
		cout << "Tonnage is " << this->tonnage << endl;
	}
};