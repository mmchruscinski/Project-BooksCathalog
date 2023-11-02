#include "book.hpp"
using namespace std;

// Book::Book(string author,
//     string title,
//         int read,
//         int listen,
//         Genre genre
//         ) 
// {

// };

string Book::show() const {
    return _author + 
           " - " + 
           _title + 
           ", " + 
           to_string(_read) + 
           ", " + 
           to_string(_listen) + 
           ", " + 
           "Powiesc";
}