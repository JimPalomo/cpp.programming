#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"
using namespace std;

class People {
    public:
        People(string x, Birthday bo);
        void printInfo();
    private:
        string name;
        
        // Passing in birthday object into people.h
        Birthday dateOfBirth;
};

#endif