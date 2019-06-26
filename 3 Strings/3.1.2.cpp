// Strings: methods/functions

#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    
    // Check string length
    cout << phrase.length() << endl;
    
    // Changing specific character in phrase string
    phrase[0] = 'L';
    
    // Print specific character from string
    cout << phrase[0] << endl;

    // Find method, Aca --> starts at 8th index
    cout << phrase.find("Aca") << endl;
    // cout << phrase.find("Aca", 0); // find starting from index 0
    
    return 0;
    
}
