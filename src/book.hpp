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
public:
    Book(
        string author,
        string title,
        int read,
        int listen,
        Genre genre);
private:
    Genre g;
};