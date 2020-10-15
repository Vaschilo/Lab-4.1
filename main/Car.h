#pragma once
#include <iostream>
using namespace std;

class Car
{
protected:
	string* model;
	int numofcyl;
	int power;
public:
	Car() {}
	Car(string* model, int numofcyl, int power)
	{
		this->model = model;
		this->numofcyl = numofcyl;
		this->power = power;
	}
	~Car() {}

	void SetModel(const string* model) { this->model = (string*)model; }
	void SetNumofcyl(int numofcyl) { this->numofcyl = numofcyl; }
	void SetPower(int power) { this->power = power; }

	auto GetModel() { return model; }
	auto GetNumofcyl() { return numofcyl; }
	auto GetPower() { return power; }

	void print()
	{
		cout <<
			"Model is " << *(this->model) << "\n" <<
			"Num of cylinders is " << this->numofcyl << "\n" <<
			"Power of engine is " << this->power << endl;
	}
};