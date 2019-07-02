// Object-Oriented Programming: classes and objects, public

#include <iostream> 
using namespace std;

class BuckysClass {
    // Public can be used outside of the class, access specifier 
    public:
        void coolSaying() {
            cout << "preaching to the choir" << endl;
        }
};

int main() 
{
    BuckysClass buckysObject;

    // Dot operator used to access values in the class
    buckysObject.coolSaying();

    
    return 0;
}

