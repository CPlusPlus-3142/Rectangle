/**
 * This is the header file for the Rectangle class.
 * It contains the class DECLARATION.
 * 
 */
#include <iostream>
#ifndef RECTANGLE_V3_H
#define RECTANGLE_V3_H
class Rectangle {
    private:
        double width;
        double length;
        void check_dimension(double dim);
    public: 
        // constructors
        // you only get a default constructor from 
        // the compiler if you have no constructors.
        Rectangle(); // default constructor
        Rectangle(double w, double l);
        Rectangle(const Rectangle& other);
        // setters and getters
        void set_width(double w);
        void set_length(double l);
        double get_width() const;
        double get_length() const;
        void set_values(double w, double l);
        double area() const;
}; 
#endif