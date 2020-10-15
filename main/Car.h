#pragma once
#include <iostream>
using namespace std;

class Car
{
protected:
	string model;
	string engine;
	double tank; // volume
	int seats; // num of seats
	bool transmission; // 1 - auto, 0 - machanic
	bool wheel; // 1 - left, 0 - right
public:
	Car() {}
	Car(string model, string engine, double tank, int seats, bool transmission, bool wheel) 
	{
		this->model = model;
		this->engine = engine;
		this->tank = tank;
		this->seats = seats;
		this->transmission = transmission;
		this->wheel = wheel;
	}
	~Car() {}

	void SetModel(const string model) { this->model = model; }
	void SetEngine(const string engine) { this->engine = engine; }
	void SetTank(double tank) { this->tank = tank; }
	void SetSeats(int seats) { this->seats = seats; }
	void SetTransmission(bool transmission) { this->transmission = transmission; }
	void SetWheel(bool wheel) { this->wheel = wheel; }

	auto GetModel() { return model; }
	auto GetEngine() { return engine; }
	auto GetTank() { return tank; }
	auto GetSeats() { return seats; }
	auto GetTransmission() { return transmission; }
	auto GetWheel() { return wheel; }

	void print()
	{
		cout <<
			"Model is " << this->model << "\n" <<
			"Engine type is " << this->engine << "\n" <<
			"Volume - " << this->tank << "\n" <<
			"Num of seats is " << this->seats << "\n";
		cout << this->transmission ? "automatic\n" : "mechanic\n";
		cout << this->wheel ? "left\n" : "right\n";
	}
};