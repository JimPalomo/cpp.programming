// Object-Oriented Programming: structs

#include <iostream>
#include <string>

using namespace std;

struct Dog 
{
    string name;
    int age;

};

void initDog(Dog &d, string name, int age);


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
