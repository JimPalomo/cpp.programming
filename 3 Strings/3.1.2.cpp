// Strings: methods/functions

#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    string phrasesub;
    
    // Check string length
    cout << phrase.length() << endl;
    
    // Changing specific character in phrase string
    phrase[0] = 'L';
    
    // Print specific character from string
    cout << phrase[0] << endl;

    // Find method, Aca --> starts at 8th index
    cout << phrase.find("Aca") << endl;
    // cout << phrase.find("Aca", 0); // find starting from index 0
    
    // Substring method (start index, how many chars)
    phrasesub = phrase.substr(8, 3);
    
    cout << phrasesub;
    
    return 0;
}
