// For Loop: exponent function
#include <iostream>

int power(int baseNum, int powNum) {
    int result = 1;
    
    for(int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    
    return result;

}

using namespace std;

int main()
{
    
    cout << power(2,8);

    return 0;
}

