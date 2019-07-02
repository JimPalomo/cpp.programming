//  Pointers: dereferencing pointers 
// instead of pointing to memory loc, point to description (storage)

#include <iostream>


using namespace std;

int main()
{

    int age = 19;
    
    // Creating a pointer variable
    int *pAge = &age;
    
    double gpa = 2.7;
    double *pGpa = &gpa;
    
    string name = "Mike";
    string *pName = &name;
    
    // Printing pointer variables
    cout << pAge << endl;
    cout << pGpa << endl;
    cout << pName << endl;    
    
    // Printing by dereferencing pointer variables
    cout << *pAge << endl;
    cout << *pGpa << endl;
    cout << *pName << endl;   
    
    
    return 0;
}

