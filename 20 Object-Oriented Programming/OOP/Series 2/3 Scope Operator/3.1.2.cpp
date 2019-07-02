// Object-Oriented Programming: unary scope operator

#include <iostream> 
using namespace std;

int tuna = 20;

int main() {
    
    int tuna = 20;

    // Scope uses global variable instead of local
    cout << ::tuna << endl;

    return 0;
}

