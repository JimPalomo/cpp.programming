// Object-Oriented Programming: objects, attributes, header, constructor, 

/* 
    Insight:
        Objects: anything that can be seen or touched
        Attributes: objects have attributes, something that defines them

        Attributes = Members
        Actions = Methods
        Blueprints = Classes
        Construction = Instantiation
*/

#include <iostream>
#include "dog.h"

int main() 
{
    Dog d("Spike", 2);

    std::cout << "Name: " << d.name << " -- Age: " << d.age << std::endl;

    return 0;
}