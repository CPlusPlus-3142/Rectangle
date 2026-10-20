#include "Rectangle_v3.h"
#include <iostream>
// our goal: when you hit the { the object
// should already be initialized
// memberwise initialization
Rectangle::Rectangle(): width(0), length(0) {}

Rectangle::Rectangle(double w, double l): width(w), length(l) {}
Rectangle::Rectangle(const Rectangle& other) :
            width{other.width}, length{other.length} {
                std::cout << "IN Copy constructor..." << std::endl;
            }
void Rectangle::set_width(double w) {
    width = w;
}
void Rectangle::set_length(double l) {
    length = l;
}
double Rectangle::get_width() {
    return width;
}
double Rectangle::get_length() {
    return length;
}
void Rectangle::set_values(double w, double l) {
    width = w;
    length = l; 
}
double Rectangle::area() {
    return width * length;  
}
