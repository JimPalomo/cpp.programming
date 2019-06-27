// Getters & Setters: Private

#include <iostream>

using namespace std;

class Movie{
    
    // Private allows to limit edits to certain variables, therefore rating can not be changed in main
    private:
        string rating;
            
    
    public: 
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating); // Passes to setRating function
        }
  
        // Function that limits user inputting code
        void setRating(string aRating) {
            
            // Setting up rules to what the user can input as a rating
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
            
        }
        
        string getRating() {
            return rating;
        }
};

int main()
{

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    
    avengers.setRating("Dog");
    
    cout << avengers.getRating();
    
    return 0;
}

