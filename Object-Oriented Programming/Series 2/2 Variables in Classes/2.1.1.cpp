// Object-Oriented Programming: class variables, unconventional declaration of classes

#include <iostream> 
#include <string>
using namespace std;

class BuckysClass {
    public:
        string name;


};

int main() 
{   
    BuckysClass bo;
    bo.name = "Bucky Roberts";
    cout << bo.name << endl;

    return 0;
}

