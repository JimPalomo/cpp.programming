// Object-Oriented Programming: class variables, private, conventional way of declaring classes
// Functions used to get variables that are private

#include <iostream> 
#include <string>
using namespace std;

class BuckysClass {
    /* 
        Indirect Access:
            When using private, there is no direct access to the name variable.
            However, one can use functions to access the variable. 
    */  
    public:
        // setName function changes the variable
        void setName(string x) {
            name = x;
        }
        
        // getName function gets the value of the variable
        string getName() {
            return name;
        }
    private:
        string name;

};

int main() 
{   
    BuckysClass bo;
    bo.setName("Sir Bucky Wallace");
    cout << bo.getName() << endl;

    return 0;
}

