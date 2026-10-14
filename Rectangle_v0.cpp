/** OOP
 * The idea of Object Oriented Programming is to focus on the nouns or objects
 * that the program will use, and the tasks are services provided
 * by the objects.
 * 
 * 3 pillars of OOP:
 * 1. Encapsulation - the idea of keeping data and the code that manipulates it together in one place, the class
 * 2. Inheritance - the idea of creating a new class based on an existing class, the new class inherits the data and code from the existing class
 * 3. Polymorphism - the idea of having multiple classes that share a common interface
 * 
 * How do we create a class in C++?
 */
// version 0 will have the class in 1 file
#include <iostream>
class Rectangle {
    private:
        double width;
        double length;
    public: 
    
        Rectangle() { width=0; length=0; } // default constructor - no arguments

        
        //Rectangle(double w, double l); // parameterized constructor
        // setters and getters
        void set_width(double w) {
            width = w;
        }
        void set_length(double l) {
            length = l;
        }
        double get_width() {
            return width;
        }
        double get_length() {
            return length;
        }
        void set_values(double x, double y) {
            width = x;
            length = y; 
        }
        double area() {
            return width * length;  
        }
}; // you have to put a semicolon at the end of the class declaration
// global functions that are not part of the class
int main() {
    Rectangle r1{};
    Rectangle r2; // both invoke the default constructor
    // but r1 is initialized to 0,0 and r2 is junk values
    // that is because r1 uses the {} initialization syntax which invokes the default constructor and initializes the members to 0, while r2 uses the () initialization syntax which invokes the default constructor but does not initialize the members, so they are junk values
    std::cout << "r1 width: " << r1.get_width() << " length: " << r1.get_length() << std::endl;
    std::cout << "r2 width: " << r2.get_width() << " length: " << r2.get_length() << std::endl;
}