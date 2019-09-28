#include "GameObject.h"

GameObject::GameObject() // default constructor 
	: GameObject(0, 0)
{
	//empty
}

GameObject::GameObject(double positionValue, double speedValue) // Constructor
	: xPosition(positionValue),
	Speed(speedValue)
{
	//empty
}

GameObject::~GameObject()
{
	//empty 
}

double GameObject::getXposition()
{
	return xPosition;
}

void GameObject::setXposition(double x)
{
	xPosition = x;
}

double GameObject::getSpeed()
{
	return Speed;
}

void GameObject::setSpeed(double s)
{
	Speed = s;
}

void GameObject::Update()
{
	xPosition += Speed;
}

void GameObject::Print()
{
	//will print vital information
}