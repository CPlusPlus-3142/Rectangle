#include "Rectangle_v2.h"
/** including the .h file allows main to see
* the DECLARATION of the class and its member functions.
* You are able to compile the main function ( use -c )
* however, you cannot link.
*/
#include <iostream>
int main() {
    Rectangle r1{};
    Rectangle r2; // both invoke the default constructor
    // but r1 is initialized to 0,0 and r2 is junk values
    // that is because r1 uses the {} initialization syntax which invokes the default constructor and initializes the members to 0, while r2 uses the () initialization syntax which invokes the default constructor but does not initialize the members, so they are junk values
    std::cout << "r1 width: " << r1.get_width() << " length: " << r1.get_length() << std::endl;
    std::cout << "r2 width: " << r2.get_width() << " length: " << r2.get_length() << std::endl;
}