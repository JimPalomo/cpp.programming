// CPP file: building functions

#include "Burrito.h"
#include <iostream>
using namespace std;

// Binary scope resolution operator, burrito constructor is a member of Burrito class
// Function is a member of the following class: "class::function"
Burrito::Burrito() {
    cout << "I am a banana" << endl;
}