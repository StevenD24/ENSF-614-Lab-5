/*
 *  File Name: shape.h
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#ifndef LAB_5_SHAPE_H
#define LAB_5_SHAPE_H

#include "point.h"

class Shape {

protected:
    Point origin;
    char* shapeName;

public:
    Shape(double x, double y, const char* name);
    // REQUIRES
    //     an argument of type Point and a char pointer to its name
    // PROMISES
    //     initialize the data members of Shape

    virtual ~Shape();
    // REQUIRES
    //     destroys the shape object and deallocates the memory

    Shape(const Shape& s);
    // REQUIRES
    //     s as a reference to a constant Shape object
    // PROMISES
    //     deep copy of Shape object with data members of s

    Shape& operator=(const Shape &rhs);
    // REQUIRES
    //     rhs as a reference of constant Shape object
    // PROMISES
    //     deep copy of a Shape object with data members of rhs

    const Point& getOrigin() const;
    // PROMISES
    //     returns the reference to the origin of a Point object

    const char* getName() const;
    // PROMISES
    //     returns the pointer to the shape name

    virtual void display() const;
    // PROMISES
    //     display the shape's name, and x and y coordinates of the Point object

    virtual double distance (Shape& other) const;
    // REQUIRES
    //     other as a reference to a Shape object
    // PROMISES
    //     the distance between this Shape and other on the cartesian plane

    static double distance(Shape& the_shape, Shape& other);
    // REQUIRES
    //     the_shape and other as references to Shape objects
    // PROMISES
    //     the distance between the_shape and other on the cartesian plane

    void move (double dx, double dy);
    // REQUIRES
    //     dx and dy as type double
    // PROMISES
    //     change the position of the Shape by dx and dy

    virtual double area() const = 0; // pure virtual (abstract) method
    // PROMISES
    //     returns the area of the shape object

    virtual double perimeter() const = 0; // pure virtual (abstract) method
    // PROMISES
    //     returns the perimeter of the shape object
};

#endif //LAB_5_SHAPE_H
