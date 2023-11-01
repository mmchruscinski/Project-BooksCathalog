#include <gtest/gtest.h>
#include "book.hpp"
#include "database.hpp"


// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(CheckStructure, CanAddBook2db) {
  Book ksiazka_testowa {
      "Autor", 
      "Tytul", 
      1, 
      1, 
      Genre::Powiesc, 
      };

  Database db;
  db.add(ksiazka_testowa);
}