/**
 * We are introducing the Room class to explain an OOP concept:
 * COMPOSITION
 * has-a relationship between classes
 * Every room has a floor (which is of type Rectangle)
 * composition goes hand in hand with DELEGATION
 */
#include "Rectangle_v3.h"
#include "Room.h"

Room::Room(): floor() {}
/* as soon as a Room object is instantiated, a Rectangle
object is instantiated inside of it for its floor.
In order to properly initialize the floor we would
want to invoke the Rectangle constructor.
member init does exactly that. */
Room::Room(double w, double l): floor(w,l) {}
// the following constructor invokes the Rectangle
// copy constructor to construct the floor object.   
Room::Room(const Rectangle& fl): floor(fl) {}
// this function will return the area of the Room
// which is the area of the floor
double Room::area() const {
    return floor.area(); // delegation
}
void Room::set_dim(double w, double l) {
    floor.set_values(w,l);
}