// Object-Oriented Programming: namespace

#include <iostream>
#include <string>

using namespace std;

// Create own namespace (named region that limits the "scope" of variables)
// Creating separate region for a group of variables, functions, classes 
namespace DogSpace
{
struct Dog 
{
    string name;
    int age;

};
}

void initDog(Dog &d, string name, int age);

using namespace DogSpace;

int main()
{
    Dog d;
    d.name = "Spike";
    d.age = 2;

    initDog(d, "Santos L. Halper", 4);

    cout << "Name: " << d.name << endl;
    cout << "Age: " << d.age << endl;

    return 0;

}

void initDog(Dog &d, string name, int age)
{
    d.name = name;
    d.age = age;
}
