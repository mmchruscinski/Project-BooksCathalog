#pragma once
#include <string>
#include <iostream>
using namespace std;

enum class Genre {
    Powiesc,
    Dramat,
    Poezja,
    Filozofia,
    Biografia,
    Reportaz,
    PopularnoNaukowa,
    Naukowa,
    Publicystyka,
    Literaturoznawstwo,
    Muzykoznawstwo,
    Fantasy,
    SciFi
};

class Book {
private:
    string _author, _title;
    int _read, _listen;
    Genre _genre;
public:
    Book(string author,
         string title,
         int read,
         int listen,
         Genre genre) : _author{author},
                        _title{title},
                        _read{read},
                        _listen{listen},
                        _genre{genre} {}

    string show() const;
};