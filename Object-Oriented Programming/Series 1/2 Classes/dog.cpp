#include "dog.h"

// Scope to tell system that Dog is from Dog's constructor
Dog::Dog(std::string inName, int inAge) {
    name = inName;
    age = inAge;
}
