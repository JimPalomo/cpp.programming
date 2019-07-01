// Object-Oriented Programming: global and local variables

#include <iostream> 
using namespace std;

// Global variable (all functions and main can use this var)
int tuna = 20;

int main() {
    
    cout << tuna << endl;

    int tuna = 69;

    cout << tuna << endl;


    return 0;
}

void bucky() {
    cout << tuna << endl;
}
