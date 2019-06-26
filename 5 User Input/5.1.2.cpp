// User Input: string

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string name;
    
    cout << "Enter your name: ";
    
    // Getting user input for strings
    getline(cin, name);
    
    cout << "Hello " << name << endl;
    
    return 0;
}
