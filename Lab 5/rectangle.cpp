/*
 *  File Name: rectangle.cpp
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#include "rectangle.h"
#include <iostream>
#include <iomanip>

using namespace std;

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char* name) : Shape(x, y, name), Square(x, y, side_a, name){
    this->side_b = side_b;
}

double Rectangle::area() const {
    return this->side_a * this->side_b;
}

double Rectangle::perimeter() const {
    return 2 * this->side_a + 2 * this->side_b;
}

double Rectangle::get_side_b() const {
    return this->side_b;
}

void Rectangle::set_side_b(double side) {
    this->side_b = side;
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << endl;
    getOrigin().display();
    cout << "Side a: " << fixed << setprecision(2) << get_side_a() << endl;
    cout << "Side b: " << fixed << setprecision(2) << get_side_b() << endl;
    cout << "Area: " << fixed << setprecision(2) << area() << endl;
    cout << "Perimeter: " << fixed << setprecision(2) << perimeter() << endl;
}




