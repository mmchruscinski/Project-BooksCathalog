#include <gtest/gtest.h>
#include "book.hpp"
#include "database.hpp"

struct DatabaseTest : ::testing::Test{
  Database db;
};

TEST_F(DatabaseTest, CanAddBook2db) {
  Book ksiazka_testowa {
      "Autor", 
      "Tytul", 
      1, 
      1, 
      Genre::Powiesc, 
      };

  EXPECT_TRUE(db.add(ksiazka_testowa));
  EXPECT_FALSE(db.add(ksiazka_testowa));
}

TEST_F(DatabaseTest, DisplayEmptyDb) {
  auto content = db.show();
  auto expected = "";
  EXPECT_EQ(content, expected);
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