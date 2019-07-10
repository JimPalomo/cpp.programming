// Creating a dynamic list/array (positive numbers)

#include <iostream>
using namespace std;

// Function to print list (if there are empty indices then a memory leak will occur)
void printList(int aList[], int amount) {
    for(int i = 0; i < amount; i++) {
            cout << aList[i] << "\t";
        }
    cout << endl;
}

// Function for debugging memory leaks (parameters: list, original amount, desired amount) [Not 100% accurate but gets most mem leaks]
void checkMemLeaks(int aList[], int amt) {
    for(int i = 0; i < amt; i++) {
        if (i >= amt || aList[i] < 0 || aList[i] > amt) {
            cout << "Memory leak" << "\t";
        } else {
            cout << aList[i] << "\t";
        }
    }
}

// Function to add a certain amount of sequential numbers to a list
void addSequential(int aList[], int amount) {
    for(int i = 0; i < amount; i++) {
        aList[i] = i;
    }
}

// Function to copy a list [copyList(original, copy to, amt)]
void copyList(int aList[], int bList[], int amount) {
    for(int i = 0; i < amount; i++) {
        bList[i] = aList[i];
    }
}

// Function to insert a number at a specific index
void insertToList(int aList[], int position, int number, int amount) {
    for(int i = amount; i > position - 1; i--) {
        aList[i+1] = aList[i];
    }


    aList[position] = number;
}

// Function to delete a specific index
void deleteFromList(int aList[], int position, int amount) {
        for(int i = position; i < amount; i++) {
        aList[i] = aList[i+1];
    }
}


int main() {

    int amt = 10;           // amt = amount of indices
    int list[amt];          // Original list
    int listcp[amt];        // copy of list
    int memLeakList[50];

    // Added sequential counting to the list with up to 5 indices
    cout << "Original List" << endl;
    addSequential(list, amt);
    printList(list, amt);
    cout << endl;

    // Inserting a number to a specific index in the list
    cout << "Inserting a Number to List" << endl;
    insertToList(list, 2, 25, amt);
    printList(list, amt + 1);
    cout << endl;

    // Deleting a specific index
    cout << "Deleting specific index from list" << endl;
    deleteFromList(list, 5, amt);
    printList(list, amt);
    cout << endl;

    // Testing memory leak function
    // addSequential(memLeakList, amt);
    // checkMemLeaks(memLeakList, 50);
    
    return 0;
}
