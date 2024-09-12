#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Book.h"

class User {
private:
    std::string name;
    std::string id;
    std::vector<Book> borrowedBooks;

public:
    User(const std::string& name, const std::string& id);
    std::string getName() const;
    std::string getId() const;
    void borrowBook(Book& book);
    void returnBook(Book& book);
    std::vector<Book> getBorrowedBooks() const;
};

#endif
