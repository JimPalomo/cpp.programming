//  Pointers: pointer variables

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
    cout << pGpa << end;
    cout << pName << endl;    

    
    
    return 0;
}

