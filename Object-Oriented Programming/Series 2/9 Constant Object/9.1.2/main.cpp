// Object-Oriented Programming: constant object

#include <iostream>
#include "Sally.h"
using namespace std;

int main() {
    
    Sally salObj;
    salObj.printShiz();

    // When creating a constant object, the function also has to be constant
    const Sally constObj;
    constObj.printShiz2();
    
    return 0;
} 
