#include "Hannah.h"
#include <iostream>
using namespace std;

Hannah::Hannah(int num) : h(num) {}

void Hannah::printCrap() {

    // Print out private variable h
    cout << "h=" << h << endl;

    // Print out this pointer (go to memory address and dereference to get the value of the object)
    cout << "this->" << this->h << endl;

    // Dereferencing a pointer
    cout << "(*this).h=" << (*this).h << endl;


}