#include "Rectangle_v3.h"
/** illustrating pointers with a class that 
 * we created.
 * also show dynamically allocated objects
*/
#include <iostream>
using namespace std;
Rectangle* readandcreate() {
    cout << "Enter width and length: ";
    double w, l;
    cin >> w >> l;
    return new Rectangle(w,l); // returns an address
    // of a new Rectangle on the HEAP 
}
void displayRectangle(Rectangle r)
{
    std::cout << "width: " << r.get_width() << " length: " << r.get_length() << std::endl;
}
// we changed the parameter from pass by reference
// to a pointer argument
void clearRectangle(Rectangle* r)
{
    r->set_length(0.0);
    r->set_width(0.0);
    std::cout << "in function clearRectangle: ";
    displayRectangle(*r);
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
        Rectangle r2{3.4, 5.6};
        std::cout << "r1 width: " << r1.get_width() << " length: " << r1.get_length() << std::endl;

        Rectangle r3 = r2; // copy constructor called
        r3.set_length(9.9);
        // same as: Rectangle r3{r2};
        std::cout << "r2: ";
        displayRectangle(r2);
        std::cout << "r3: ";
        displayRectangle(r3);
        clearRectangle(&r3);
        std::cout << "after calling clearRectangle on r3: ";
        displayRectangle(r3);
        Rectangle r4 = add(r1, r2);
        std::cout << "after calling add, r4: ";
        displayRectangle(r4);

        // ptr to Rectangle
        Rectangle* rect_ptr = &r2; // get an alias
        rect_ptr -> set_length(888.1); // modifies r2
        // Rectangle c-style array
        Rectangle rectArr[5]; // 5 default const calls of the Rectangle class
        // Rectangle[] rarr = new Rectangle[5]; Java
        // no Rectangle constr gets called in Java
        for (Rectangle& r: rectArr) {
            r.set_values(1.0, 2.0);
        }
        for (Rectangle* rptr=rectArr; rptr<rectArr+5; rptr++) {
            cout << "area: " << rptr->area() << endl;
        }
    }
    catch (const char *str) 
    {
        std::cout << "an exception was thrown. " << str << std::endl;
    }
    // execution continues here
}
