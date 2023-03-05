/*
 *  File Name: square.h
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#ifndef LAB_5_SQUARE_H
#define LAB_5_SQUARE_H

#include "point.h"
#include "shape.h"

class Square : virtual public Shape {
protected:
    double side_a;

public:
    Square(double x, double y, double side, const char*name);
    // REQUIRES
    //     three arguments of type double and a pointer to a string literal
    // PROMISES
    //     create a square object with the given arguments

    double area() const override;
    // PROMISES
    //     returns the area of a square

    double perimeter() const override;
    // PROMISES
    //     returns the perimeter of a square

    double get_side_a() const;
    // PROMISES
    //     returns the side of a square

    void set_side_a(double side);
    // REQUIRES
    //     side argument of type double
    // PROMISES
    //     sets the side of square

    void display() const override;
    // PROMISES
    //     prints the square object
};

#endif //LAB_5_SQUARE_H
