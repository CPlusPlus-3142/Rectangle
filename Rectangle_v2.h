/**
 * This is the header file for the Rectangle class.
 * It contains the class DECLARATION.
 * note: until now we included function declarations
 * in the .h so this follows the same pattern,
 * 
 */
#ifndef RECTANGLE_V2_H
#define RECTANGLE_V2_H
class Rectangle {
    private:
        double width;
        double length;
    public: 
 
        // Rectangle();
        // setters and getters
        void set_width(double w);
        void set_length(double l);
        double get_width();
        double get_length();
        void set_values(double w, double l);
        double area();
}; 
#endif