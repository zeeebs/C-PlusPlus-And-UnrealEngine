#include <iostream>
#include "myFunction.h"
using namespace std;


int main()
{
	//REFERENCE VARIABLE CHALLENGE
		//A reference variable is a "reference" to an existing variable, and it is created with the & operator

	string food = "quesadilla";
	string& meal = food;
	//cout << food << endl;
	cout << meal << endl;
	//use either the variable name food or the reference name meal to refer to the food variable

	cout << "\n";

	//& OPERATOR CHALLENGE
		//the & operator can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

	cout << &food << endl;

	cout << "\n";

	//POINTER CHALLENGE
		//A pointer is a variable that stores the memory address as its value
		//A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. 
		//The address of the variable you're working with is assigned to the pointer:

	string* point = &food; //pointer declaration
	cout << food << endl;
	cout << &food << endl;
	cout << point << endl;

	cout << "\n";

	//DEREFERENCE OPERATOR CHALLENGE
		//you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator)

	cout << *point << endl; //outputs the value of the variable its pointing to instead of its location in memory 



