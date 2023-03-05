/*
 *  File Name: circle.cpp
 *  Assignment: ENSF 614 Lab 5 Exercise B
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#include "circle.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

Circle::Circle(double x, double y, double r, const char *name) : Shape(x, y, name) {
    this->radius = r;
}

double Circle::area() const {
    return M_PI * this->radius * this->radius;
}

double Circle::perimeter() const {
    return 2 * M_PI * this->radius;
}

double Circle::get_r() const {
    return this->radius;
}

void Circle::set_r(double r) {
    this->radius = r;
}

void Circle::display() const {
    cout << "Circle Name: " << getName() << endl;
    getOrigin().display();
    cout << "Radius: " << fixed << setprecision(2) << get_r() << endl;
    cout << "Area: " << fixed << setprecision(2) << area() << endl;
    cout << "Perimeter: " << fixed << setprecision(2) << perimeter() << endl;
}