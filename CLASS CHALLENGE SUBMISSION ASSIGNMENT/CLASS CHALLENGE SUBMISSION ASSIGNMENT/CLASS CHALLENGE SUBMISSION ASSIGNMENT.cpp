// CLASS CHALLENGE SUBMISSION ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    string Color;
    int Height;
    int Width;
    int Base;
    float Radius;
    int Area;
    int getArea() {
        return Area;
    }
};

class Rectangle : public Shape {
public: 
    string Color;
    int Height;
    int Width;
    void setArea(int a) {
        Area = a;
    }
    int getArea() {
        return Area;
    }
};

class Triangle : public Shape {
public:
    string Color;
    int Base;
    int Height;
    void setArea(int a) {
        Area = a;
    }
    int getArea() {
        return Area;
    }
};

class Circle : public Shape {
public:
    string Color;
    int Radius;
    void setArea(int a) {
        Area = a;
    }
    int getArea() {
        return Area;
    }
};



int main()
{
   Rectangle rectangle;
    rectangle.Color = "yellow";
    rectangle.Height = 5;
    rectangle.Width = 5;
    rectangle.setArea(25);
    cout << "area of the " << rectangle.Color << " rectangle: " << rectangle.getArea() << endl;

    Triangle triangle;
    triangle.Color = "blue";
    triangle.Base = 2;
    triangle.Height = 3;
    triangle.setArea(3);
    cout << "area of the " << triangle.Color << " triangle: " << triangle.getArea() << endl;

    Circle circle;
    circle.Color = "red";
    circle.Radius = 6;
    circle.setArea(113.1);
    cout  << "area of the " << circle.Color << " circle: " << circle.getArea() << endl;

}


