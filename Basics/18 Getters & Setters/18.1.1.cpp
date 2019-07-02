// Getters & Setters: (just a template)

#include <iostream>

using namespace std;

class Movie{
    public: 
        string title;
        string director;
        string rating;
        
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            rating = aRating;
        }
    
};

int main()
{

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    // Movie avengers("The Avengers", "Joss Whedon", "Dog");  // Can set rating to anything at this time

    
    cout << avengers.rating;
    
    return 0;
}

