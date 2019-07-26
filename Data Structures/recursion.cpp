#include <iostream>

using namespace std;

void counter(int);

int factorial(int);


int main() {
    int num;
    cout << "Type in an integer: ";
    cin >> num;

    counter(num);

    cout << factorial(num) << endl;

    return 0;
}



void counter(int count) {
    
    // Base case
    if (count >= 1) {
        // counter(count - 1);     // Counts from 1 to 7 (reverse) due to recursive rules (repeat # of iterations after recursion)
        cout << "Number: " << count << endl;
        counter(count - 1);        // Normal recursion 7 to 1
    }
}

int factorial(int count) {
    if (count == 0 || count == 1) {
        return 1;
    } else if (count > 1) {
        return (count * factorial(count - 1));
    }
}