/**
 * This is the header file for the Rectangle class.
 * It contains the class DECLARATION.
 * 
 */
#ifndef RECTANGLE_V2_H
#define RECTANGLE_V2_H
class Rectangle {
    private:
        double width;
        double length;
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
        double get_width();
        double get_length();
        void set_values(double w, double l);
        double area();
}; 
#endif