// Object-Oriented Programming: sizeof function (break from pointers)

#include <iostream>
using namespace std;

int main() {

    // char c;
    // int c;
    double c;
    cout << sizeof(c) << endl;  // size in bytes
    
    // Checking sizeof an array
    double bucky[10];
    cout << sizeof(bucky) << endl;
    
    // Checking how many indices/elements there are in the array
    cout << sizeof(bucky) / sizeof(bucky[0]) << endl;

    return 0;
} 
