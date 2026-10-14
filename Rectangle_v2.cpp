#include "Rectangle_v2.h"

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
