/*
 *  File Name: point.cpp
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#include "point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int Point::count = 1000;

Point::Point(double x, double y) {
    this->xCoordinate = x;
    this->yCoordinate = y;
    this->id = ++count;
}

Point::~Point() {
    --count;
}

Point::Point(const Point &P) {
    this->xCoordinate = P.getx();
    this->yCoordinate = P.gety();
    this->id = ++count;
}

Point& Point::operator=(const Point &rhs) {
    if (this != &rhs) {
        this->xCoordinate = rhs.getx();
        this->yCoordinate = rhs.gety();
        this->id = ++count;
    }

    return *this;
}

void Point::display() const {
    cout << "X-coordinate: " << fixed << setprecision(2) << getx() << endl;
    cout << "Y-coordinate: " << fixed << setprecision(2) << gety() << endl;
}

double Point::getx() const {
    return this->xCoordinate;
}

double Point::gety() const {
    return this->yCoordinate;
}

void Point::setx(double x) {
    this->xCoordinate = x;
}

void Point::sety(double y) {
    this->yCoordinate = y;
}

int Point::counter() const {
    return count;
}

double Point::distance(const Point &p) const {
    double dx = this->getx() - p.getx();
    double dy = this->gety() - p.gety();

    return sqrt(pow(dx,2) + pow(dy,2));
}

double Point::distance(const Point &p1, const Point &p2) {
    double dx = p1.getx() - p2.getx();
    double dy = p1.gety() - p2.gety();

    return sqrt(pow(dx, 2) + pow(dy,2));
}




