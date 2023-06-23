#include <iostream>
using namespace std;

int main()
{
	//CONDITIONAL STATEMENTS CHALLENGE
	
	int x = 4;
	int y = 10;

	//1. Write and execute an if statement and display the result in the console.
	if (x == y) {
		cout << "x equals y" << endl;
	}

	//2. Write and execute an else statement and display the result in the console.
	if (x > y) {
		cout << "x is greater than y" << endl;
	}
	else {
		cout << "x is not greater than y" << endl;
	}

	//3. Write and execute an else if statement and display the result in the console.
	if (x > y) {
		cout << "x is greater than y" << endl;
	}
	else if (x == y){
		cout << "x is equal to y" << endl;
	}
	else {
		cout << "x is not equal or greater than y" << endl;
	}

	//4. Write and execute a switch statement and display the result in the console.
	int fruit = 3;
	switch (fruit) {
	case 1:
		cout << "apple" << endl;
		break;
	case 2:
		cout << "strawberry" << endl;
		break;
	case 3:
		cout << "peach" << endl;
		break;
	}

	//5. Utilize a ternary operator (shorthand way of if/else statement)
	string result = (y < 20) ? "less than 20" : "not less than 20";
	cout << result << endl;

	cout << "\n";

	//WHILE LOOP CHALLENGE
	int i = 0;
	while (i < 5) {
		cout << i << "\n";
		i++;
	}

	cout << "\n";

	//DO/WHILE LOOP CHALLENGE
	int j = 0;
	do {
		cout << j << "\n";
		j++;
	} 
	while (j < 3);

	cout << "\n";

	//FOR LOOP CHALLENGE
	for (int z = 5; z < 10; z++) {
		cout << z << "\n";
	}

	cout << "\n";

	//BREAK AND CONTINUE CHALLENGE
	for (int f = 10; f < 20; f++) {
		if (f == 14) {
			break;
		}
		cout << f << "\n";
	}

	for (int a = 1; a < 8; a++) {
		if (a == 4) {
			continue;
		}
		cout << a << "\n";
	}

	cout << "\n";

	//ARRAY CHALLENGE
	string colors[6] = { "red", "orange", "yellow", "green", "blue", "violet"};
	cout << colors[3] << endl;

	cout << "\n";

	//ARRAY LOOP CHALLENGE
	for (int c = 0; c < 3; c++) {
		cout << colors[c] << "\n";
	}

	
}

