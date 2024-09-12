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
    bool addBook(const Book& book);
    bool registerUser(const User& user);
    bool borrowBook(const std::string& userName, const std::string& isbn);
    bool returnBook(const std::string& userName, const std::string& isbn);

private:
    Book* findBookByIsbn(const std::string& isbn);
    User* findUserByName(const std::string& name);
};

#endif // LIBRARY_H
