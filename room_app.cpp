#include "Room.h"
#include <iostream>

int main()
{
   Room r{}; // this instantiates a Room object
   // it also instantiates a Rectangle object for floor
   // because of our member init Rectangle constr is called
   Rectangle rect(3.5, 6.7);
   Room r2(rect); // this would result in a call to copy constructor
   // from the member init
   std::cout << "area of r2: " << r2.area() << std::endl;
   // to Rectangle's copy constructor
   r2.set_dim(9.9, 2.1);
   std::cout << "area of r2: " << r2.area() << std::endl;
}
