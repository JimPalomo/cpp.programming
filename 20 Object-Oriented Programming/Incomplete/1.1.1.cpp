// Object-Oriented Programming: private, public, static, constructors, inheritance

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

// "::" = Scope operator, std = namespace
// using namespace std;

// Class is a blueprint
class Animal {

    // Only accessible inside of class
    private:
        std::string name;
        double height;
        double weight;

    // Shared value of all objects in animal class
    static int numOfAnimals;

    // Accessible outside of class 
    public:
        std::string GetName() {return name;}
        
        // Function created. "this" = this object (similar to self in python), "->" = pointer operator, accesses object's field
        void SetName(std::string name) {this->name = name;}

        double GetHeight() {return height;}
        void SetHeight(double height) {this->height = height;}
        
        double GetWeight() {return weight;}
        void SetWeight(double weight) {this->weight = weight;}

        void SetAll(std::string, double, double);
        
        // Constructor - Prototypes
        Animal(std::string, double, double);
        
        // Overloaded constructor (if no attributes are passed)
        Animal();  

        // Deconstructor, called when an object is not being used
        ~Animal();

        static int GetNumOfAnimals() {return numOfAnimals;}

        // Same as code above
        // static int GetNumOfAnimals() {
        //     return numOfAnimals;
        // };

        // Function / method (left empty because it will be overrode)
        void ToString();
};

// Scope operator ("::") refers to class fields 
int Animal :: numOfAnimals = 0;

void Animal :: SetAll(std::string name, double height, double weight) {
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal :: numOfAnimals++;
}

// Creating constuctors
Animal::Animal(std::string name, double height, double weight) {
    this->name = name;
    this->weight = weight;
    this->height = height;
    Animal :: numOfAnimals++;
}

// Constructor, created if no attributes are passed.
Animal::Animal() {
    this->name = "";
    this->weight = 0;
    this->height = 0;
    Animal :: numOfAnimals++;
}

// Deconstructor
Animal::~Animal() {
    std::cout << "Animal " << this -> name << " destroyed\n";
}

void Animal::ToString() {
    std::cout << this -> name << " is " << this -> height << "cms tall and " << this->weight << " kgs in weight\n";
}

// Creating Dog class, inheriting from Animal class
class Dog: public Animal{ 
    private:
        std::string sound = "Woof";
    public:
        void MakeSound() {
            std::cout << "The dog " << this -> GetName() << " says " << this -> sound << "\n";
        }

        // Creating a constructor specific to dog
        Dog(std::string, double, double, std::string);
        
        // Create default constructor (if no attributes are added)
        Dog(): Animal() {};

        // Creating another ToString Function
        void ToString();

// Creating a constructor
Dog::Dog(std::string name, double height, double weight, std::string sound) :

// Adds animal constructor
Animal(name, height, weight) {
    this -> sound = sound;
}

// Inaccessible when private but accessible when protected
void Dog::ToString() {
    std::cout << this -> GetName() << "is" << this -> GetHeight() << " cms tall and " << this -> GetWeight() << " kgs in weight and says " << this -> sound << "\n";
}

};

int main() 
{
    // Create object
    Animal fred;

    // Call function to display string
    fred.ToString(); 

    // Set attributes of object fred, without using constructor
    fred.SetHeight(33);
    fred.SetWeight(10);
    fred.SetName("Fred");
    
    // Call function to display string 
    fred.ToString();
    
    // Creating object when using a constructor
    Animal tom("Tom", 36, 15);
    tom.ToString();
    
    // Creating dog object
    Dog spot("Spot", 38, 16, "Wooooof");
    spot.ToString();
    
    return 0;
}