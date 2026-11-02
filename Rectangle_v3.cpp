#include "Rectangle_v3.h"
#include <iostream>
// our goal: when you hit the { the object
// should already be initialized
// memberwise initialization (member init)
Rectangle::Rectangle(): width(0), length(0) {}

Rectangle::Rectangle(double width, double length) 
    //{ this->width=width; } // receiver object width
    // gets assigned the parameter width
: width(width), length(length) {
    check_dimension(width);
    check_dimension(length);
}
Rectangle::Rectangle(const Rectangle& other) :
            width{other.width}, length{other.length} {
                std::cout << "IN Copy constructor..." << std::endl;
            }
void Rectangle::check_dimension(double dim) {
    if (dim<0) throw "negative dimension not allowed! ";
}
void Rectangle::set_width(double width) {
    check_dimension(width);
    this->width = width;
}
void Rectangle::set_length(double length) {
    check_dimension(length);
    this->length = length;
}
double Rectangle::get_width() const {
    return width;
}
double Rectangle::get_length() const {
    return length;
}
void Rectangle::set_values(double w, double l) {
    check_dimension(w);
    check_dimension(l);
    width = w;
    length = l; 
}
double Rectangle::area() const {
    return width * length;  
}
