// Object-Oriented Programming: composition

#include <iostream>
#include "People.h"
#include "Birthday.h"
using namespace std;

int main() {
    Birthday birthObj(12, 28, 1986);

    People buckyRoberts("Bucky the King", birthObj);
    buckyRoberts.printInfo();
}

// Output: Bucky the King was born on 12/28/1986
//         ^  From the People Class ^ ^Birthday Class^