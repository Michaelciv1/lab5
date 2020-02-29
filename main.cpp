//*************************************************
//File name:  main.cpp
//Author:     Michael Wallerius and Lab Group 5
//Date:       2020/02/27
//*************************************************

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Circle c(8,4,7);
    Rectangle r(12,5);

    cout << "The X coordinate of the Circle is " << c.getCenterX() << endl;
    cout << "The Y coordinate of the Circle is " << c.getCenterY() << endl;
    cout << "The radius of the Circle is " << c.getRadius() << endl;
    cout << "The area of the Circle is " << c.getArea() << endl;
    cout << endl;
    cout << "The width of the Rectangle is " << r.getWidth() << endl;
    cout << "The length of the Rectangle is " << r.getLength() << endl;
    cout << "The area of the Rectangle is " << r.getArea() << endl;
}
