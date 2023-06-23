#pragma once
//header (.h) files
//Functions and variables are normally declared, in header files, and implemented, or given a definition, in source files.
//.h file declares the function prototype, which tells the compiler upfront what parameters it requires, 
//and what return type to expect from it. The .cpp file has all the implementation details of the function

class Calculator
{
public:
	double Calculate(double x, char oper, double y); //calculate fuction
};

