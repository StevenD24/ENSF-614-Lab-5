/*
 *  File Name: square.cpp
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#include "square.h"
#include <iostream>
#include <iomanip>

using namespace std;

Square::Square(double x, double y, double side, const char* name) : Shape(x, y, name) {
    this->side_a = side;
}

double Square::area() const {
    return this->side_a * this->side_a;
}

double Square::perimeter() const {
    return 4 * this->side_a;
}

double Square::get_side_a() const {
    return this->side_a;
}

void Square::set_side_a(double side) {
    this->side_a = side;
}

void Square::display() const {
    cout << "Square Name: " << getName() << endl;
    getOrigin().display();
    cout << "Side a: " << fixed << setprecision(2) << get_side_a() << endl;
    cout << "Area: " << fixed << setprecision(2) << area() << endl;
    cout << "Perimeter: " << fixed << setprecision(2) << perimeter() << endl;
}
