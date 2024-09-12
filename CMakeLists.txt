cmake_minimum_required(VERSION 3.10)
project(LibraryManagementSystem)

set(CMAKE_CXX_STANDARD 11)


include_directories(include)


set(SOURCES
    src/main.cpp
    src/Book.cpp
    src/User.cpp
    src/Library.cpp
    src/utils.cpp
)


set(TEST_SOURCES
    tests/test_books.cpp
    tests/test_library.cpp
)


add_executable(LibraryManagementSystem ${SOURCES})
