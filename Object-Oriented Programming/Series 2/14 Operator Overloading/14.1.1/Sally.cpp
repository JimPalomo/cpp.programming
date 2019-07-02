#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally() {}

Sally::Sally(int a) {
    num = a;
}

// Return type_Class::operator+(parameter)
Sally Sally::operator+(Sally aso) {
    Sally brandNew;
    brandNew.num = num + aso.num;
    return(brandNew);
}