// Review of pointers

#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // Declaring a pointer to point to address of a
    int* p = &a;
    
    // Referencing to the address of a
    cout << p << endl; 

    // Dereferencing int a -- pointing to the value of a
    cout << *p << endl;
}
