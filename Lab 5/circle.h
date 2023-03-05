/*
 *  File Name: circle.h
 *  Assignment: ENSF 614 Lab 5 Exercise B
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#ifndef LAB_5_CIRCLE_H
#define LAB_5_CIRCLE_H

#include "shape.h"

class Circle : virtual public Shape {
protected:
    double radius;

public:
    Circle(double x, double y, double r, const char* name);
    // REQUIRES
    //     x, y and r as type double
    //     name as static c-string
    // PROMISES
    //     create a circle object with the arguments given

    double area() const override;
    // PROMISES
    //     returns the area of the circle

    double perimeter() const override;
    // PROMISES
    //     returns the perimeter of the circle

    double get_r() const;
    // PROMISES
    //     returns the radius of the circle

    void set_r(double r);
    // REQUIRES
    //     r as type double
    // PROMISES
    //     sets the radius of the circle to the value of r

    void display() const override;
    // PROMISES
    //     prints the circle object
};


#endif //LAB_5_CIRCLE_H
