// Object-Oriented Programming: Polymorphism
// Use same function and produce multiple results
// True Polymorphism

#include <iostream>
using namespace std;

class Enemy {
    public:
        // Virtual functions are template functions
        virtual void attack() {}
};

class Ninja: public Enemy {
    public:
        void attack() {cout << "Ninja attack!" << endl;}
};

class Monster: public Enemy {
    public:
        void attack() {cout << "Monster attack!" << endl;}
};

int main() {
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
}