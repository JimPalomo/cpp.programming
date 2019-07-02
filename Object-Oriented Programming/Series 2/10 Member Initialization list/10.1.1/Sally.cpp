#include <iostream>
#include "Sally.h"
using namespace std;

// Member initialization list in a constructor
// Whenever there is a constant variable in the class, we use member initialization list
Sally::Sally(int a, int b) 
: regVar(a), constVar(b) {}

void Sally::print() {
    cout << "regular var is: " << regVar << " const variable is: " << constVar << endl;
}