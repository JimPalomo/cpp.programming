// Object-Oriented Programming: Passing a function as an argument

#include <iostream>
using namespace std;

// Func is a pointer to a function that returns an integer
// int (*func)();

void (*func)();

void func1() {
    cout << "Hello" << endl;
}

int main() {
    func=&func1;
    func();
    
    return 0;
}