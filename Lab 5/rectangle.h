/*
 *  File Name: rectangle.h
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#ifndef LAB_5_RECTANGLE_H
#define LAB_5_RECTANGLE_H

#include "square.h"

class Rectangle : public Square {

protected:
    double side_b;

public:
    Rectangle(double x, double y, double side_a, double side_b, const char* name);
    // REQUIRES
    //     x, y, side_a and side_b as type double
    //     name as string static c-string
    // PROMISES
    //     create a rectangle object with the arguments given

    double area() const override;
    // PROMISES
    //     returns the area of a rectangle

    double perimeter() const override;
    // PROMISES
    //     returns the perimeter of a rectangle

    double get_side_b() const;
    // PROMISES
    //     returns side_b of the rectangle

    void set_side_b(double side_b);
    // REQUIRES
    //     side_b to be of type double
    // PROMISES
    //     sets side_b to be the value given by the argument

    void display() const override;
    // PROMISES
    //     prints the Rectangle object
};

#endif //LAB_5_RECTANGLE_H
