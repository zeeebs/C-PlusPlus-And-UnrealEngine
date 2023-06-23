#include <iostream>
using namespace std;

int main()
{
    //OPERATORS CHALLENGE
    cout << 4 + 6 << endl;
    cout << 4 - 6 << endl;
    cout << 4 * 6 << endl;
    cout << 24 / 6 << endl;
    int x = 4;
    cout << ++x << endl;

    cout << "\n";

    //COMPARISON OPERATORS CHALLENGE
    int y = 6;
    cout << (x > y) << endl;
    cout << (x == y) << endl;
    cout << (x != y) << endl;
    cout << (x <= y) << endl;

    cout << "\n";

    //ASSIGNMENT OPERATORS CHALLENGE
    int z = 5;
    cout << (x += y) << endl;
    cout << (z &= y) << endl;
    cout << (x <<= y) << endl;

    cout << "\n";

    //LOGICAL OPERATOR CHALLENGE
    cout << (z == z && x == x) << endl;
    cout << (z < y || x > y) << endl;
    cout << !(z == z && x == x) << endl;

    cout << "\n";

    //(HARDER) MATH FUNCTIONS CHALLENGE
    cout << max(5, 500) <<endl; //The max(x,y) function can be used to find the highest value of x and y:
        //min(x,y) is for the lowest value
    cout << sqrt(81) << endl;
    cout << round(5.5) << endl;
    cout << pow(2,3) << endl; //pow(x, y) - Returns the value of x to the power of y

}       


