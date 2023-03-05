/*
 *  File Name: shape.cpp
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#include "shape.h"
#include <cstring>
#include <iostream>
#include <iomanip>

using namespace std;

Shape::Shape(double x, double y, const char *name) : origin(Point(x, y)) {
    this->shapeName = new char[strlen(name) + 1];
    strcpy(this->shapeName, name);
}

Shape::~Shape() {
    delete [] this->shapeName;
    this->shapeName = nullptr;
}

Shape::Shape(const Shape& s) : origin(Point(s.getOrigin().getx(), s.getOrigin().gety())) {
    this->shapeName = new char[strlen(s.getName()) + 1];
    strcpy(this->shapeName, s.getName());
}

Shape& Shape::operator=(const Shape &rhs) {
    if (this != &rhs) {
        delete[] this->shapeName;
        this->origin = Point(rhs.getOrigin().getx(), rhs.getOrigin().gety());
        this->shapeName = new char[strlen(rhs.getName()) + 1];
        strcpy(this->shapeName, rhs.getName());
    }

    return *this; //deference since this is pointer
}

const Point& Shape::getOrigin() const {
    return this->origin;
}

const char* Shape::getName() const {
    return this->shapeName;
}

void Shape::display() const {
    cout << "Shape Name: " << shapeName << '\n';
    cout << "X-coordinate: " << fixed << setprecision(2) << origin.getx() << '\n';
    cout << "Y-coordinate: " << fixed << setprecision(2) << origin.gety() << '\n';
}

double Shape::distance(Shape &other) const {
    return this->getOrigin().distance(other.getOrigin());
}

double Shape::distance(Shape &the_shape, Shape &other) {
    return the_shape.getOrigin().distance(the_shape.getOrigin(), other.getOrigin());
}

void Shape::move(double dx, double dy) {
    this->origin.setx(this->getOrigin().getx() + dx);
    this->origin.sety(this->getOrigin().gety() + dy);
}




