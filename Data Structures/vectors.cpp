#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& vector) {     // Pass by reference (&) to save memory
    cout << "Vector: ";

    for (unsigned int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " ";
    }

    cout << endl;
}

int main() {
    // Format: vector<DataType> nameOfVector
    // myVector.push_back(value): adds an element to the end & resizes the vector
    // myVector.at(index): returns an element at a specific index 
    // myVector.size(): returns an unsigned int equal to the number of elements (unsigned = always positive)
    // myVector.begin(): reads vector from the first element (index 0)
    // myVector.insert(myVector.begin() + int, new value): adds elements before specified index 
    // myVector.erase(myVector.begin() + int): removes element at specified index
    // myVector.clear(): removes all elements in vector
    // myVector.empty: returns bool value if vector is empty

    vector<int> myVector;

    // Adding elements to the back of vector
    myVector.push_back(3);  
    myVector.push_back(7);
    myVector.push_back(4);
    myVector.push_back(12);
    myVector.push_back(9);

    // cout << myVector.at(i) << " ";
    printVector(myVector);

    // Inserting element at specific location
    myVector.insert(myVector.begin() + 3, 5);
    printVector(myVector);

    // Erasing Element
    myVector.erase(myVector.begin() + 4);
    printVector(myVector);

    // Clearing vector
    myVector.clear();
    printVector(myVector);

    // Checking a vector is empty
    if (myVector.empty() == true) {
        cout << "Vector is empty!" << endl;
    } else {
        cout << "Vector is not empty!" << endl;
    }


    return 0;
}