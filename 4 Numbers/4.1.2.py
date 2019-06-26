// Numbers: storing numbers in variable types (int, double)

#include <iostream>

using namespace std;

int main()
{

    int wnum = 5;
    double dnum = 5.5;
    
    wnum++;     // Increment wnum by 1
    
    wnum += 80  // Increment wnum by 80
    
    cout << wnum << endl;

    cout << 5 + 5 << endl;      // int + int = int
    cout << 5.5 + 9 << endl;    // double + int --> double
    cout << 5.5 + 9.9 << endl;  // double + double --> double

    
    
    return 0;
}
