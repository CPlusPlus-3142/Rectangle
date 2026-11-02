/**
 * The class declaration should be separate from the class definition.
 * declaration includes prototypes of the member functions, 
 * i.e. function declarations.
 * and definition includes the implementation of the member functions.
 */
// version 1 will still have the class in 1 file
// however, we separate the declaration from the definition
// here.
#include <iostream>
class Rectangle {
    private:
        double width;
        double length;
    public: 
 
        Rectangle();
        // setters and getters
        void set_width(double w);
        void set_length(double l);
        double get_width();
        double get_length();
        void set_values(double w, double l);
        double area();
}; 
// member function definitions
// I have to "scope" them to be part of the Rectangle class, 
// because otherwise I won't have access to the private members.
// global functions that are not part of the class
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
int main() {
    Rectangle r1{};
    Rectangle r2; 
    std::cout << "r2 width: " << r2.get_width() << " length: " << r2.get_length() << std::endl;
}