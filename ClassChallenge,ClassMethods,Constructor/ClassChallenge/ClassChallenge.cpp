// ClassChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Create a class (use the class keyword).
//Utilize the public keyword.
//Create multiple objects within a single class.

//The class keyword is used to create a class called MyClass.
//The public keyword is an access specifier, which specifies that members(attributes
	//and methods) of the class are accessible from outside the class.You will learn more about access specifiers later.
//Inside the class, there is an integer variable myNumand a string variable myString.When variables are declared within a class, they are called attributes.
//At last, end the class definition with a semicolon

//CLASS CHALLENGE
class MyClass {       // The class
public:				  // Access specifier
	int myInt;        // Attribute (int variable)
	string myString;  // Attribute (string variable)
};


//CLASS METHODS CHALLENGE
class ClassMethods {	// The class
public:					// Access specifier
	//Define a function that belongs to a class inside the class definition.
	void classFunction1() {
		cout << "Define a function that belongs to a class inside the class definition." << endl; // Method/function defined inside the class
	}
	
	//Define a function that belongs to a class outside the class definition
	void classFunction2(); // Method / function declaration
};


// CLASS METHODS CHALLENGE - Method/function definition outside the class
void ClassMethods::classFunction2() {
	cout << "Define a function that belongs to a class outside the class definition" << endl;
}


//CONSTRUCTOR METHOD CHALLENGE
	//A constructor in C++ is a special method that is automatically called when an object of a class is created.
	//To create a constructor, use the same name as the class, followed by parentheses ()
		//Constructors can also take parameters, & can also be defined outside the class
class Fruit {  //Constructor Method
public:
	string name;
	int quantity;
	Fruit(string x, int y); //{ //constructor with parameters
		//name = x;
		//quantity = y;
	//} declaring inside the class
		 
};

Fruit::Fruit(string x, int y) {
	name = x;
	quantity = y;
	//declaring outside the class
}


//PRIVATE KEYWORD CHALLENGE
class PrivateClass {
public:
	int number1;
private:
	int number2;
protected: //PROTECTED KEYWORD CHALLENGE
	int number3;
};

//INHERITANCE CHALLENGE
//1.Utilize the : symbol to inherit from a class.
//base class
class Vehicle {
public:
	string brand = "Honda";
	void honk() {
		cout << "Inheritance Challenge \n";
	}
};
//derived class
class Car : public Vehicle {
public:
	string model = "Civic";
};
//2. Multilevel Inheritance
class Packages : public Car {
public:
	string packages = "Sport";
};
//3. Multiple Inheritance
	//Derive a class from more than one base class (using a comma-separated list).
class MultipleClass1 {
public:
	void inheritanceFunction() {
		cout << "A class can also be derived from more than one base class, \n";
	}
};
class MultipleClass2 {
public:
	void secondFunction() {
		cout << "using a comma-separated list \n";
	}
};
class ChildClass : public MultipleClass1, public MultipleClass2 {};
//4. Access the protected specifier in an inherited class.
class Employee { //base class
protected: //protected access specifier
	int salary;
};
//derived class
class Programmer : public Employee {
public: 
	int bonus;
	void setSalary(int s) {
		salary = s;
	}
	int getSalary() {
		return salary;
	}
};

int main()
{
//CLASS CHALLENGE
	MyClass myObj1; // Create an object of MyClass
	MyClass myObj2;
	
	// Access attributes and set values
	myObj1.myInt = 5;
	myObj2.myString = "five";
	
	cout << myObj1.myInt << endl;
	cout << myObj2.myString << endl;


//CLASS METHODS CHALLENGE
	//Define a function that belongs to a class inside the class definition.
	ClassMethods myObj3; // Create an object
	myObj3.classFunction1(); // Call the method

	//Define a function that belongs to a class outside the class definitio
	ClassMethods myObj4; // Create an object
	myObj4.classFunction2(); // Call the method



//CONSTRUCTOR METHOD CHALLENGE
	//if declaring inside class, can just put 'Class Object;' (Fruit myObj;) in main
	Fruit myObj5("lemon", 3);
	Fruit myObj6("apple", 10);
	cout << myObj5.name << " " << myObj5.quantity << "\n";
	cout << myObj6.name  << " " << myObj6.quantity << "\n";


//PRIVATE KEYWORD CHALLENGE
	PrivateClass myObj7;
	myObj7.number1 = 5; // Allowed (public)
	//myObj8.number2 = 6; // Not allowed (private)


//INHERITANCE CHALLENGE
	//1
	Car myObj9;
	myObj9.honk();
	cout << myObj9.brand + " " + myObj9.model << endl;
	//2
	Packages myObj10;
	myObj10.honk();
	cout << myObj10.brand + " " + myObj10.model + " " + myObj10.packages << endl;
	//3
	ChildClass myObj11;
	myObj11.inheritanceFunction();
	myObj11.secondFunction();
	//4
	Programmer myObj12;
	myObj12.setSalary(50000);
	myObj12.bonus = 15000;
	cout << "Salary: " << myObj12.getSalary() << "\n";
	cout << "Bonus: " << myObj12.bonus << "\n";
}
