// 2D Array & Nested For Loop:

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
    
    // First for loop covers [rows] & Second for loop covers [columns] 
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << numberGrid[i][j];
        }    
        cout << endl;
    }
    
    
    return 0;
}

