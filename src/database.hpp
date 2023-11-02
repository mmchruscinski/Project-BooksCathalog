#pragma once
#include <iostream>
#include <vector>
#include "book.hpp"
using namespace std;

class Database {
public:
    void add(const Book &b);
    void display() const;
    string show() const;
private:
    vector<Book> _books;
};