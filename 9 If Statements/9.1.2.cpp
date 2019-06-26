// If statements: and operator (&&)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    bool isMale = true;
    bool isTall = true;
    
    
    if (isMale && isTall) {
        cout << "You are a tall male";
    
    } else {
        cout << "You are not a tall male";

    }

    
    return 0;
}

