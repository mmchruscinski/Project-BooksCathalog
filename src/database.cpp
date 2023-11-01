#include "database.hpp"

bool Database::add(const Book &b) {
    if (_isAdded) {
        return false;
    } else {
        _isAdded = true;
        return true;
    }
}