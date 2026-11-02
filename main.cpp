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

Passing objects as parameters:
1. pass by value
2. pass by reference
(3. pass by pointer)
*/
#include <iostream>
// void displayRectangle(Rectangle r)
/* pass by value calls the copy constructor and
initializes a new local object and changes
would be only to the local object.
This differs from Java where a reference is passed
by value, and no new object gets created. all changes
to the object in Java change the object in the calling
function. */
void displayRectangle(Rectangle r)
{
    std::cout << "width: " << r.get_width() << " length: " << r.get_length() << std::endl;
}
// pass by value changes do not stick
// pass by reference changes will stick
void clearRectangle(Rectangle &r)
{
    r.set_length(0.0);
    r.set_width(0.0);
    std::cout << "in function clearRectangle: ";
    displayRectangle(r);
}
// return by value
Rectangle add(const Rectangle &r1, const Rectangle &r2)
{
    Rectangle sum(r1.get_width() + r2.get_width(),
                  r1.get_length() + r2.get_length());
    return sum;
}

int main()
{
    try
    {
        Rectangle r1{};
        Rectangle r2{-3.4, 5.6};
        std::cout << "r1 width: " << r1.get_width() << " length: " << r1.get_length() << std::endl;

        Rectangle r3 = r2; // copy constructor called
        r3.set_length(9.9);
        // same as: Rectangle r3{r2};
        std::cout << "r2: ";
        displayRectangle(r2);
        std::cout << "r3: ";
        displayRectangle(r3);
        clearRectangle(r3);
        std::cout << "after calling clearRectangle on r3: ";
        displayRectangle(r3);
        Rectangle r4 = add(r1, r2);
        std::cout << "after calling add, r4: ";
        displayRectangle(r4);
    }
    catch (const char *str)
    {
        std::cout << "an exception was thrown. " << str << std::endl;
    }
    // execution continues here
}
