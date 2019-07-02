// Object-Oriented Programming: Constructors

#include <iostream>
#include <string>
using namespace std;

class BuckysClass {
    public:
        // Constructors have the same name, sets values of members within an object
        BuckysClass(string z) {
            setName(z);
        }

        void setName(string x) {
            name = x;
        }
        
        string getName() {
            return name;
        }
    private:
        string name;

};

int main() {
    BuckysClass bo("Lucky Bucky Roberts");
    cout << bo.getName() << endl;

    BuckysClass bo2("Sally McSalad");
    cout << bo2.getName() << endl;

    return 0;
}