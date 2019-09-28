#pragma once
class GameObject
{
public:
	GameObject();
	GameObject(double positionValue, double speedValue);
	virtual ~GameObject();
	
	double getSpeed();
	void setSpeed(double s); 

	double getXposition();
	void setXposition(double x);

	virtual void Update();
	virtual void Print();

protected:
	double xPosition;
	double Speed;
};