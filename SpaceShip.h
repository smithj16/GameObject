#pragma once
#include "GameObject.h"

class SpaceShip : public GameObject
{
public:
	
	SpaceShip(double position, double speed, double readiness);
	SpaceShip(); 

	double getReadiness();
	void setReadiness(double r);

	void Print() override; 
	void Update() override;
	

protected:
	double readiness;
};