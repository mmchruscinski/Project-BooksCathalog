#pragma once
#include <iostream>
#include "book.hpp"
using namespace std;

class Database {
public:
    bool add(const Book &b);
private:
    bool _isAdded = false;
};