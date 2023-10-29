#pragma once
#include <string>
using namespace std;

class Book {
private:
    string m_title, m_author, m_date, m_genre;
    char read;

public:
    Book(string title, 
         string author, 
        char read, 
        string date, 
        string genre){}
};