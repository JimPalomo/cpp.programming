// Object-Oriented Programming: passby reference by pointers

#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main() {
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << &betty << endl;
    cout << &sandy << endl;

    cout << "betty is now " << betty << endl;
    cout << "sandy is now " << sandy << endl;

    return 0;
} 

// Passing in a copy of betty. The value of betty does not change.
void passByValue(int x) {
    x = 99;
}

// Passes address sandy's memory address and changes the value of sandy.
void passByReference(int *x) {
    *x = 66;
}
