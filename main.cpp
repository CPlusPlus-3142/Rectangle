#include "Rectangle_v3.h"
/** created as part of version 2 to show separation of 
 * class declaration   .h file
 * class definition    .cpp file
 * app as a user of the class  .cpp file
 * 
 * including the .h file allows main to see
* the DECLARATION of the class and its member functions.
* You are able to compile the main function ( use -c )
* however, you cannot link.
*/
#include <iostream>
int main() {
    Rectangle r1{};
    Rectangle r2{3.4, 5.6}; 
    std::cout << "r1 width: " << r1.get_width() << " length: " << r1.get_length() << std::endl;
    
    Rectangle r3=r2; // copy constructor called
    r3.set_length(9.9);
    // same as: Rectangle r3{r2};
    std::cout << "r2 width: " << r2.get_width() << " length: " << r2.get_length() << std::endl;
    std::cout << "r3 width: " << r3.get_width() << " length: " << r3.get_length() << std::endl;
}