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
	Car() {
		this->model = NULL;
		this->numofcyl = -1;
		this->power = -1;
	}
	Car(string* model, int numofcyl, int power)
	{
		this->model = model;
		this->numofcyl = numofcyl;
		this->power = power;
	}
	~Car() {}

	void SetModel(const string* model) { if (this->model == NULL)this->model = (string*)model; else cout << "Модель уже введена\n"; }
	void SetNumofcyl(int numofcyl) { if (this->numofcyl == -1)this->numofcyl = numofcyl; else cout << "Число цилиндров уже введено\n"; }
	void SetPower(int power) { if (this->power == -1) this->power = power; else cout << "Мощность уже введена\n";
	}

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