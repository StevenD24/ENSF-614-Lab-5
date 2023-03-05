/*
 *  File Name: point.h
 *  Assignment: ENSF 614 Lab 5 Exercise A
 *  Lab Section: Lab B01
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Mar 5, 2023
 */

#ifndef LAB_5_POINT_H
#define LAB_5_POINT_H

class Point {

private:
    double xCoordinate, yCoordinate; // the x and y coordinates of the point
    int id; // the id number of the point
    static int count; // the number of objects of class Point created so far

public:
    Point(double x, double y);
    // REQUIRES
    //     two arguments of type double
    // PROMISES
    //     creates a Point object with arguments a and b
    //     of type double and initializes data members.

    ~Point();
    // PROMISES
    //    destroy the Point object and deallocate the memory
    //    decrement the number of objects by 1


    Point(const Point& P);
    // REQUIRES
    //     P as a reference to a constant Point object
    // PROMISES
    //     creates a deep copy of Point object with the data
    //     members of P.

    Point& operator = (const Point& rhs);
    // REQUIRES
    //     rhs as a reference to a constant Point object
    // PROMISES
    //     deep copy of data members of rhs to the object
    //     being created

    void display() const;
    // PROMISES
    //     prints the x and y coordinates of the Point object

    double getx() const;
    // PROMISES
    //     returns the x coordinate of Point object

    double gety() const;
    // PROMISES
    //     returns the y coordinate of Point object

    void setx(double x);
    // REQUIRES
    //     the argument to be of type double
    // PROMISES
    //     sets the x coordinate of the Point object to be x

    void sety(double y);
    // REQUIRES
    //     the argument to be of type double
    // PROMISES
    //     sets the y coordinate of the Point object to be y

    int counter() const;
    // PROMISES
    //     returns the num_of_objects of class Point

    double distance(const Point& p) const;
    // REQUIRES
    //     P to be a reference to a constant Point object
    // PROMISES
    //     returns the distance between this point and the given point

    static double distance(const Point& p1, const Point& p2);
    // REQUIRES
    //     p1 and p2 to be references to Point objects
    // PROMISES
    //     returns the distance between p1 and p2

};

#endif //LAB_5_POINT_H
