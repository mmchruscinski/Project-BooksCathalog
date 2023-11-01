#include <gtest/gtest.h>
#include "book.hpp"
#include "database.hpp"

TEST(CheckStructure, CanAddBook2db) {
  Book ksiazka_testowa {
      "Autor", 
      "Tytul", 
      1, 
      1, 
      Genre::Powiesc, 
      };

  Database db;
  EXPECT_TRUE(db.add(ksiazka_testowa));
  EXPECT_FALSE(db.add(ksiazka_testowa));
}