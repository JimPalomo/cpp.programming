// While Loops: guessing game

#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    
    while(guess != secretNum) {
        cout << "Enter guess: ";
        cin >> guess;
        
        if (guess == secretNum) {
            cout << "You got the number!"
            
        }
        
    }


    return 0;
}

