#include <iostream>
#include <vector>

using namespace std;

// Function Declarations
void fillVector(vector<int>&);  // Passing vectors by reference (&) to save memory

void printVector(const vector<int>&);   // No changes in a vector, therefore should remain constant

void reverse(const vector<int>&);

void printEvens(const vector<int>&);

void printOdds(const vector<int>&);

void replace(vector<int>&);

// int copyVector(vector<int>&);


int main() {
    
    vector<int> myVector;
    
    fillVector(myVector);
    
    printVector(myVector);

    reverse(myVector);

    printEvens(myVector);

    printOdds(myVector);

    replace(myVector);
    
    printVector(myVector);

    return 0;
}



// Function Definitions 


// Fill vector
void fillVector(vector<int>& newMyVector) {
    cout << "Type in a list of numbers (-1 to stop): ";
    int input;
    cin >> input;

    while (input != -1) {
        newMyVector.push_back(input);
        cin >> input;
    }
    cout << endl;

}

// Print vector
void printVector(const vector<int>& newMyVector) {
    cout << "Vector: ";

    for(unsigned int i = 0; i < newMyVector.size(); i++) {
        cout << newMyVector[i] << " ";

    }
    cout << endl;
}

// Reversing vector
void reverse(const vector<int>& newMyVector) {
    cout << "Vector Reversed: ";

    for (unsigned int i = newMyVector.size(); i > 0; i--) { 
        cout << newMyVector[i - 1] << " ";
    }
    cout << endl;
}


// Printing the even numbers in a vector
void printEvens(const vector<int>& newMyVector) {
    cout << "Evens: "; 

    for (unsigned int i = 0; i < newMyVector.size(); i++) {
        if ((newMyVector[i] % 2) == 0) {
            cout << newMyVector[i] << " ";
        }
    }
    cout << endl;
}

// Printing the odd numbers in a vector
void printOdds(const vector<int>& newMyVector) {
    cout << "Odds: "; 

    for (unsigned int i = 0; i < newMyVector.size(); i++) {
        if ((newMyVector[i] % 2) != 0) {
            cout << newMyVector[i] << " ";
        }
    }
    cout << endl;
}

// Replacing a number in a vector
void replace(vector<int>& newMyVector) {
    int old, replace;

    cout << "Type in a number to be replaced & replace it with another: ";
    cin >> old >> replace;
    
    for (unsigned int i = 0; i < newMyVector.size(); i++) {
        if (newMyVector[i] == old) {
            newMyVector[i] = replace;
        }
    }
    cout << endl;
}

// // Copying a vector
// int copyVector(vector<int>& newMyVector) {
//     vector<int> copyOfVector;

//     // for (unsigned int i = 0; i < newMyVector.size(); i++) {
//     //     copyOfVector[i] = newMyVector[i];
//     // }

//     for (unsigned int i = 0; i < newMyVector.size(); i++) {
//         copyOfVector.push_back(newMyVector[i]);
//     }

//     // return copyOfVector;
//     return vector<int> copyOfVector;

// }