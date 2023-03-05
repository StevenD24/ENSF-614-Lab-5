/*
 *  File Name: curvecut.cpp
 *  Assignment: ENSF 614 Lab 5 Exercise B
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#include "curvecut.h"
#include <iostream>

using namespace std;

CurveCut::CurveCut(double x, double y, double side_a, double side_b, double r, const char *name) : Shape(x, y, name),  Rectangle (x, y, side_a, side_b, name),
Circle(x, y, r, name) {
    if (!(r <= side_a && r <= side_b)) {
        cerr << "The radius must be less than or equal to the width and length.";
        exit(1);
    }
}

double CurveCut::area() const {
    return (Rectangle::area() - (Circle::area()/4));
}

double CurveCut::perimeter() const {
    return Rectangle::perimeter() - (2 * Circle::get_r()) + Circle::perimeter()/4;
}

void CurveCut::display() const {
    cout << "CurveCut Name: " << this->getName() << endl;
    Circle::getOrigin().display();
    cout << "Width: " << this->get_side_a() << endl;
    cout << "Length: " << this->get_side_b() << endl;
    cout << "Radius of the cut: " << this->get_r() << endl;
}
