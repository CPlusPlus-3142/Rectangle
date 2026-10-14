/**
 * The class declaration should be separate from the class definition.
 * declaration includes prototypes of the member functions, 
 * i.e. function declarations.
 * and definition includes the implementation of the member functions.
 */
// version 0 will have the class in 1 file
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
}; // you have to put a semicolon at the end of the class declaration
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
    Rectangle r2; // both invoke the default constructor
    // but r1 is initialized to 0,0 and r2 is junk values
    // that is because r1 uses the {} initialization syntax which invokes the default constructor and initializes the members to 0, while r2 uses the () initialization syntax which invokes the default constructor but does not initialize the members, so they are junk values
    std::cout << "r1 width: " << r1.get_width() << " length: " << r1.get_length() << std::endl;
    std::cout << "r2 width: " << r2.get_width() << " length: " << r2.get_length() << std::endl;
}