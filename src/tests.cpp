#include <gtest/gtest.h>
#include "book.hpp"
#include "database.hpp"

struct DatabaseTest : ::testing::Test{
  Database db;
};

TEST_F(DatabaseTest, DisplayEmptyDb) {
  auto content = db.show();
  auto expected = "";
  EXPECT_EQ(content, expected);
}

TEST_F(DatabaseTest, DisplayNotEmptyDb) {
  Book ksiazka_testowa {
      "Autor", 
      "Tytul", 
      1, 
      1, 
      Genre::Powiesc, 
      };
  db.add(ksiazka_testowa);
  //check adding the same book twice
  
  auto content = db.show();
  auto expected = "Autor - Tytul, 1, 1, Powiesc";
  EXPECT_EQ(content, expected);
}