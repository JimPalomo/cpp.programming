#include "Daughter.h"
#include "Mother.h"
#include <iostream>
using namespace std;

void Daughter::doSomething() {
    
    // When inheriting, public and protected variables able to be inherited 
    publicv = 1;
    protectedv = 2;
    
    // Can't access private variable because private members can not be inherited
    // privatev = 3;
}