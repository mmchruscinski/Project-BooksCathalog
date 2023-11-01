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

TEST(DisplayDb, DisplayEmptyDb) {
  Database db;
  db.display();
}

// TEST(DisplayDb, DisplayNotEmptyDb) {

//   Database db;

//   Book ksiazka_testowa {
//       "Autor", 
//       "Tytul", 
//       1, 
//       1, 
//       Genre::Powiesc, 
//       };

//   EXPECT_TRUE(db.add(ksiazka_testowa));

//   db.display();
// }