// Object-Oriented Programming: math with pointers and how to add int pointers

#include <iostream>
using namespace std;

int main() {

    int bucky[5];

    // Pointer equaling to the address of the first index
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];


    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    // bp0 pointer is repositioned to the location of bp2 (memory address)
    bp0 += 2;
    cout << "bp0 is at " << bp0 << endl;

    return 0;
} 
