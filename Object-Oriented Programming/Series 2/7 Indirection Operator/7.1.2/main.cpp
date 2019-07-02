// Object-Oriented Programming: arrow member selection operator
// Two different ways to access things from the class

#include <iostream>
#include "Sally.h"
using namespace std;

int main() {

    Sally sallyObject;
    Sally *sallyPointer = &sallyObject;

    // Dot operator (when using the object) allows to access values in the Sally class
    sallyObject.printCrap();

    // Arrow member selection operator, access by a pointer. Same as dereferencing in C using linked list
    sallyPointer->printCrap();


    return 0;
} 
