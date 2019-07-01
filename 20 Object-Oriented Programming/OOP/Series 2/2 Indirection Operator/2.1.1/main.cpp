// Object-Oriented Programming: arrow member selection operator
/* 
    Note:
        Linking error will occur if the link from one file
        to another is not properly met.

    Example: 
        Code will not work if called:
            cd "/home/jim/visual/" && g++ main.cpp -o main && "/home/jim/visual/"main
        Code will work if called:
            cd "/home/jim/visual/" && g++ main.cpp Sally.cpp -o main && "/home/jim/visual/"main

*/

#include <iostream>
#include "Sally.h"
using namespace std;

int main() {

    Sally sallyObject;

    sallyObject.printCrap();



    return 0;
} 
