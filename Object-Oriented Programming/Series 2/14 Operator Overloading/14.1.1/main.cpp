// Object-Oriented Programming: Operator Overloading

#include "Sally.h"
#include <iostream>
using namespace std;

int main() {
    Sally a(34);
    Sally b(21);
    Sally c;

    c = a+b;

    cout << c.num << endl;
}