#pragma once
#include "Car.h"

class Truck :public Car
{
private:
	int tonnage;
public:
	Truck() { this->tonnage = -1; this->model = NULL; this->numofcyl = -1; this->power = -1;}
	Truck(string* model, int numofcyl, int power, int tonnage)
	{
		this->model = model;
		this->numofcyl = numofcyl;
		this->power = power;
		this->tonnage = tonnage;
	}
	~Truck() {}

	void SetTonnage(int tonnage) { if (this->tonnage == -1) this->tonnage = tonnage; else cout << "Грузоподъёмность уже введена\n"; }
	auto GetTonnage() { return this->tonnage; }
	void print()
	{
		cout << "Truck ";
		Car::print();
		cout << "Tonnage is " << this->tonnage << endl;
	}
	void ChangeMark(const string* model) { this->model = (string*)model; }
	void ChangeTonnage(int tonnage) { this->tonnage = tonnage; }
};