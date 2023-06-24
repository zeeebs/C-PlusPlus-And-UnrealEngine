// Polymorphism+Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//POLYMORPHISM CHALLENGE

//polymorphism occurs when we have many classes that are related to each other by inheritance.
//Inheritance lets us inherit attributes and methods from another class. 
//Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

//base class
class Animal {
public:
    void animalSound() {
        cout << "The animal makes a sound \n";
    }
};
//derived class
class Pig : public Animal {
public:
    void animalSound() {
        cout << "The pig says: oink oink \n";
    }
};
//derived class
class Dog : public Animal {
public:
    void animalSound() {
        cout << "The dog says: woof woof \n";
    }
};


//EXCEPTION CHALLENGE

//Exception handling in C++ consist of three keywords: try, throw and catch:
//The try statement allows you to define a block of code to be tested for errors while it is being executed.
//The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
//The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
//The tryand catch keywords come in pairs :

int main()
{

//POLYMORPHISM CHALLENGE

    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

//EXCEPTION CHALLENGE

    try {
        int age = 15;
        if (age >= 18) {
            cout << "You are old enough.";
        }
        else {
            throw (age);
        }
    }
    catch (int myNum) {
        cout << "You must be at least 18 years old.\n";
        cout << "Age is: " << myNum << endl;
    }
}
