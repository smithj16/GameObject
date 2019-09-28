#include "SpaceShip.h"
#include <iostream>

using namespace std; 

SpaceShip::SpaceShip()
	:SpaceShip(0, 0, 0)
{
	//empty
}

SpaceShip::SpaceShip(double position, double speed, double readiness)
	: GameObject(position, speed),
	readiness(readiness)
{
	//empty
}

double SpaceShip::getReadiness()
{
	return readiness;
}

void SpaceShip::setReadiness(double r)
{
	readiness = r;
}

void SpaceShip::Update()
{
	xPosition += Speed;

	if (readiness >= 0 && readiness <= 100)
	{
		++readiness;
	}
}

void SpaceShip::Print()
{
	cout << "Speed is: " << Speed << endl;
	cout << "Position is: " << xPosition << endl;
	cout << "Battle readiness is: " << readiness << endl;
}

