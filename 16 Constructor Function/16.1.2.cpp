//  Constructors: multiple constructors

#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        
        // Multiple Constructors
        Book() {
            title = "no title";
            author = "no author";
            page = 0;
        }
        
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;

        }
};

int main()
{

    // Creating books (objects) using constructors
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkein", 700);
    Book book3;
    
    cout << book1.title;
    
    
    
    return 0;
}

