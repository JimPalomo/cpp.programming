// Object-Oriented Programming: pointers, namespace
// Pointers allow for allocating or deallocating memory

#include <iostream>

using namespace std;

int main()
{
    // Initializing a pointer (pointer that stores a value to a certain memory address)
    // Initialize a pointer with 0 or NULL
    int * p = 0;

    int x = 10;

    // p = memory address of x (& stands for memory address)
    p = &x;

    // Print out value of x
    cout << " x = " << x << endl;

    // Print out address of x
    cout << "&x = " << &x << endl;

    // Print out p = address of x
    cout << " p = " << p << endl;

    // Print value pointed by p --> at address x = 10 (* = dereference operator)
    cout << "*p = " << *p << endl;

    return 0;

}