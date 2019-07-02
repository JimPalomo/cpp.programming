// Object-Oriented Programming: new operator, dynamically allocate memory,

#include <iostream>

using namespace std;

int main()
{
    int size = 10 ;
    int *arr;

    cout << "Enter array size: ";
    cin >> size;

    // new operator allocates memory (similar to malloc()) 
    arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i;
        cout << "arr [" << i << "] = " << i << endl;
    }

    // frees memory
    delete arr;

    return 0;

}