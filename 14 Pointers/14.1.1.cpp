//  Pointers

#include <iostream>


using namespace std;

int main()
{

    int age = 19;
    double gpa = 2.7;
    string name = "Mike";
    
    // Prints out pointer "pointing to" memory address 
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;
    
    
    return 0;
}

