#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<User> users;

public:
    void addBook(const Book& book);
    void addUser(const User& user);

    Book* findBookByIsbn(const std::string& isbn);
    User* findUserById(const std::string& userId);

    bool borrowBook(const std::string& isbn, const std::string& userId);
    bool returnBook(const std::string& isbn, const std::string& userId);
};

#endif
