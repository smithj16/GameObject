#include "SpaceShipCaptain.h"

SpaceShipCaptain::SpaceShipCaptain()
	:SpaceShipCaptain(0, 0, 0, 0)
{
	//empty
}

SpaceShipCaptain::SpaceShipCaptain(double position, double speed, string name, double rested)
	: GameObject(position, speed),
	Name(name),
	Rested(rested)
{
	//empty
}

string SpaceShipCaptain::getName()
{
	return Name;
}

void SpaceShipCaptain::setName(string name)
{
	Name = name;
}

double SpaceShipCaptain::getRested()
{
	return Rested;
}

void SpaceShipCaptain::setRested(double value)
{
	Rested = value;
}

void SpaceShipCaptain::Update()
{
	xPosition += Speed;

	if (Rested >= 0 && Rested <= 100)
	{
		--Rested;
	}
}

void SpaceShipCaptain::Print()
{
	std::cout << "The name is: " << Name << std::endl;
	std::cout << "The position is: " << xPosition << std::endl;
	std::cout << "The speed is: " << Speed << std::endl;
	std::cout << "The battle readiness is: " << Rested << std::endl;
}