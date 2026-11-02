/**
 * We are introducing the Room class to explain an OOP concept:
 * COMPOSITION  
 * has-a relationship between classes
 * Every room has a floor (which is of type Rectangle)
 * 
 */
#include "Rectangle_v3.h"
#ifndef ROOM_H
#define ROOM_H
class Room {
    private:
        Rectangle floor; // field of the class is an object
      //  Rectangle windows[4];
    public: 
        Room();
        Room(double width, double length);
        Room(const Rectangle& fl);
        double area() const;
        void set_dim(double w, double l);       
}; 
#endif