// Object-Oriented Programming: Pointers

#include <iostream>
using namespace std;

int main() {
    int fish = 5;

    // Address operator
    cout << &fish << endl;

    // Creating a pointer
    int *fishPointer; 

    // Fishpointer = memory address of fish
    fishPointer = &fish;

    cout << fishPointer << endl;

    return 0;
} 
