// Variables

#include <iostream>

using namespace std;

int main()
{
    
    // Declaring strings and ints   
    string characterName = "John";
    int characterAge;
    
    // Assigning int variable to 35
    characterAge = 35;
    
    
    // Printing variables at the end of line and between lines
    cout<<"There once was a man named " << characterName << endl;      // endl is a newline(\n in C or python)
    cout<<"He was "<< characterAge <<" years old" << endl;
    
    characterName = "Mike";
    
    cout<<"He liked the name " << characterName << endl;
    cout<<"But did not like being " << characterAge << endl;



    return 0;
}
