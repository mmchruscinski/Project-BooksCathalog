#include "database.hpp"

void Database::add(const Book &b) {
    _books.push_back(b);
}

void Database::display() const {
    cout << show();
}

string Database::show() const {
    string result = "";
    for(auto && book : _books) {
        result += book.show();
    }
    return result;
}