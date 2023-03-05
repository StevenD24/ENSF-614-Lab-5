/*
 *  File Name: curvecut.h
 *  Assignment: ENSF 614 Lab 5 Exercise B
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#ifndef LAB_5_CURVECUT_H
#define LAB_5_CURVECUT_H

#include "rectangle.h"
#include "circle.h"


class CurveCut : public Rectangle, public Circle {

public:
    CurveCut(double x, double y, double side_a, double side_b, double r, const char* name);
    // REQUIRES
    //     x, y, side_a, side_b, r to be of type double
    //     name as a static c-string
    // PROMISES
    //     create a CurveCut object with the given args

    double area() const;
    // PROMISES
    //     calculate the area of the CurveCut object

    double perimeter() const;
    // PROMISES
    //     calculate the perimeter of the CurveCut object


    void display() const;
    // PROMISES
    //     print the CurveCut object
};


#endif //LAB_5_CURVECUT_H
