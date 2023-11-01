#pragma once
#include <iostream>
#include "book.hpp"
using namespace std;

class Database {
public:
    bool add(const Book &b);
    void display() const;
    string show() const;
private:
    bool _isAdded = false;
};