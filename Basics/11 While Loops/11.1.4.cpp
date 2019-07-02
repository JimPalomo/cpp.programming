// While Loops: guessing game

#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    
    while(guess != secretNum && !outOfGuesses) {
        
        if(guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++; 
        } else {
            outOfGuesses = true;
        }
        
        if(guess == secretNum) {
            cout << "You got the number correct!";
            
        }
        
    }
    
    if(outOfGuesses == true) {
        cout << "You Lose!";
    }


    return 0;
}

