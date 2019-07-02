// 2D Array:

#include <iostream>


using namespace std;

int main()
{
    // Creating a 2D array (matrix) [row][column]
    int numberGrid[3][2] = {
        
        {1,2},
        {3,4},
        {5,6},
            
    };
    
    cout << numberGrid[0][1];
    cout << numberGrid[2][0];
    
    return 0;
}

