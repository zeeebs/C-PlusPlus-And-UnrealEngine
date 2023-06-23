// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	
	//cout keyword is used to print to standard output in C++. The << operator tells the compiler to send whatever is to the right of it to the standard output.
	//endl keyword is like the Enter key; it ends the line and moves the cursor to the next line
	
	Calculator c;
	while (true) 
	{
		cin >> x >> oper >> y; //cin keyword is used to accept input from the user
		if (oper == '/' && y == 0)
		{
			cout << "Division by 0 exception" << endl;
			continue;
		}
		else 
		{
			result = c.Calculate(x, oper, y); //c.Calculate(x, oper, y); expression calls the Calculate function defined earlier, and supplies the entered input values. 
										//The function then returns a number that gets stored in result.
		}
		cout << "Result is: " << result << endl; 
	}
	return 0;
}

