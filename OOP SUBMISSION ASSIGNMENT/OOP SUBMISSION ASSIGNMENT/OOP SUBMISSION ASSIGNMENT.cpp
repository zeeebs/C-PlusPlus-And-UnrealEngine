// OOP SUBMISSION ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Create the exact class shown
class Dog {
public:
	string Breed;
	string Color;
	string Height;
	string Weight;
	void Shake() {
		cout << "shake \n";
	}
	void Sit() {
		cout << "sit \n";
	}
	void LayDown() {
		cout << "Lay Down \n";
	}
};
//Create the instance of the class (object), and have it inherit all properties and methods.
class Hound: public Dog {
public:
	string Breed = "Hound";
	string Color = "Brown";
	string Height = "2 feet";
	string Weight = "60 pounds";
};

int main()
{
	Hound hound;
	hound.Shake();
	hound.Sit();
	hound.LayDown();
}
