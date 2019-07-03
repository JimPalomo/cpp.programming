// Object-Oriented Programming: Passing a function as an argument

#include <iostream>
using namespace std;

// Passing a funciton as argument = Adding function to parameter and calling it
int call(int (*func) (int), int arg) {
    return func(arg);
}

int inc(int var) {
    return ++var;
}

int main() {
    cout << call(inc, 8) << endl;
    
    return 0;
}