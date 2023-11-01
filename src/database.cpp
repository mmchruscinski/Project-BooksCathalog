#include "database.hpp"

bool Database::add(const Book &b) {
    if (_isAdded) {
        return false;
    } else {
        _isAdded = true;
        return true;
    }
}

void Database::display() const {
    cout << show();
}

string Database::show() const {
    return "";
}