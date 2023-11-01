#pragma once
#include <iostream>
#include "book.hpp"
using namespace std;

class Database {
public:
    void add(const Book &b);
};