#pragma once
#include "GameObject.h"
#include<iostream>
#include <string>

using namespace std; 

class SpaceShipCaptain :public GameObject
{
public:
	SpaceShipCaptain();
	SpaceShipCaptain(double positionValue, double speed, string name, double rested);

	string getName();
	void setName(string name);

	double getRested();
	void setRested(double rested);

	void Update() override;
	void Print() override;

protected:
	string Name;
	double Rested;
};
