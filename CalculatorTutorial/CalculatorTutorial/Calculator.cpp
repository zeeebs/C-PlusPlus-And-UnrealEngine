#include "Calculator.h"
//source (.cpp) file
//Functions and variables are normally declared, that is, 
//given a name and a type, in header files, and implemented, or given a definition, in source files.
//.h file declares the function prototype, which tells the compiler upfront what parameters it requires, 
//and what return type to expect from it. The .cpp file has all the implementation details of the function

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}


//The double keyword denotes a type of number that supports decimals. 
//This way, the calculator can handle both decimal math and integer math. 
//The Calculate function is required to always return such a number due to the double at the very start of the code 
//(this denotes the function's return type), which is why we return 0.0 even in the default case.