cmake_minimum_required(VERSION 3.27)
project(books-cathalog)

set(SOURCES
    src/database.cpp 
    src/book.cpp)

add_executable(${PROJECT_NAME} src/main.cpp ${SOURCES})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(${PROJECT_NAME}-ut src/tests.cpp ${SOURCES})
target_link_libraries(${PROJECT_NAME}-ut GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)