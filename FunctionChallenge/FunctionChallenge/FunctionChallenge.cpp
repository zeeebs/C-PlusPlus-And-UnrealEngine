// FunctionChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//1. Call a function without an argument.
void myFunction() {
	cout << "1. Call a function without an argument." << endl;
}

//2. Declare a function with multiple parameters.
void parsFunction(int x=2, int y=3) {
	cout << (x * y) << endl;
}

//3. Utilize the return keyword inside a function.
int returnFunction(int z) {
	return 5 + z;
	cout << "\n";
}

//4. Pass a reference to a function
void swapNums(int& x, int& y) {
	int z = x;
	x = y;
	y = z;

}

//5. Use function overloading (name multiple functions with different parameters).  
int myFunction(int a, int b) {
	return a + b;
}

int main()
{
	myFunction();
	cout << "\n";
	parsFunction();
	cout << "\n";
	cout << returnFunction(5); 
	cout << "\n";
	//4.
	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	// Call the function, which will change the values of firstNum and secondNum
	swapNums(firstNum, secondNum);

	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	//5.
	int num1 = myFunction(5, 5);
	cout << num1 << endl;
}
