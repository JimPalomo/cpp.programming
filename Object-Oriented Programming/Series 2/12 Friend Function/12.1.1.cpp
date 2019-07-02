// Object-Oriented Programming: Friend

#include <iostream>
using namespace std;

class StankFist {
    public:
        // Constructor (same name)
        StankFist() {stinkyVar = 0;}
    private:
        int stinkyVar;

    // Prototyping stinkysFriend function inside class so that the function can use the class
    friend void stinkysFriend(StankFist &sfo);
};

// Function has access to variables inside the class by using the Friend keyword
void stinkysFriend(StankFist &sfo) {
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}

int main() {
    StankFist bob;
    stinkysFriend(bob);

    return 0;
}