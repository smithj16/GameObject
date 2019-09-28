#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "GameObject.h"
#include "SpaceShip.h"
#include "SpaceShipCaptain.h"

using namespace std; 

bool sortFunction(GameObject * &lhs, GameObject * &rhs)
{
	if (lhs->getXposition() == rhs->getXposition())
	{
		return lhs->getSpeed() < rhs->getSpeed();
	}
	else
	{
		return lhs->getXposition() < rhs->getXposition();
	}
}

int main()
{
	int position, speed, readiness, restedness;
	int program = true, answer, ans; 
	int indexInput;
	string name; 

	vector<GameObject*> objects; 
	cout << "What would you like to do today?" << endl; 
	cout << "1.Create a SpaceShip" << endl;
	cout << "2.Create a SpaceShip Captain" << endl; 
	cout << "3.Update SpaceShip and Captain." << endl; 
	cout << "4.Display GameObjects" << endl; 
	cout << "5.Sort objects " << endl; 
	cout << "6.Delete a GameObject" << endl; 
	cout << "7.End Game" << endl; 
	cin >> answer;
	

	do
	{
		if (answer == 1)
		{
			cout << "Enter the x-value of the position: ";
			cin >> position;
			cout << "Enter the speed:";
			cin >> speed;
			cout << "Enter the the battle readiness: ";
			cin >> readiness;

			objects.push_back(new SpaceShip(position, speed, readiness));
		}

		else if (answer == 2) 
		{	                  

			cout << "Enter the name: ";
			cin >> name;
			cout << "Enter the position: ";
			cin >> position;
			cout << "Enter the speed:";
			cin >> speed;
			cout << "Enter the the battle restedness: ";
			cin >> restedness;

			objects.push_back(new SpaceShipCaptain(position, speed, name, restedness));
		
		}

		else if (answer == 3) 
		{					  

			for (GameObject *p : objects)
			{
				p->Update();
			}
			
		}

		else if (answer == 4) 
		{
			int count = 0;
			for (GameObject *p : objects) 
			{
				cout << "[" << count << "] ";
				p->Print();
				cout << endl;
				++count;
			}
			
		}
		else if (answer == 5) 
		{
			sort(objects.begin(), objects.end(), sortFunction);
		}

		else if (answer == 6) 
		{
			cout << "Which object would you like to delete?" << endl; 
			cin >> indexInput; 
			objects.erase(objects.begin()+indexInput);
		}

		else if (answer == 7) 
		{
			cout << "Are you sure you would like to end the game?" << endl; 
			cout << "1) yes " << endl; 
			cout << "2) no " << endl; 
			cin >> ans; 

			if (ans == 1)
			{
				cout << "Thank you and have a nice day!" << endl; 
				for (GameObject *p : objects)
				{
					delete p;
				}
				objects.clear();

				program = false; 
			}

			else if (ans == 2)
			{
				cout << endl;
				cout << "Enter your option: ";
				cin >> answer;
				cout << endl;
			}

			else
			{
				cout << "You did not enter a the following options. Program will end now.  " << endl; 
				program = false
			}

		}

		else
		{
			cout << "Please enter one of the options stated above." << endl;
		}

		cout << "\n" << endl; 
		cout << "Enter your option: ";
		cin >> answer;
	
		//do
	}while (program = true); 


	system("pause");
	return 0;
}