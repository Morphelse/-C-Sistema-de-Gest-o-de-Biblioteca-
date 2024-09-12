#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Book.h"

class User {
private:
    std::string id;
    std::string name;
    std::vector<Book> borrowedBooks;  // Livros emprestados pelo usuário

public:
    User(const std::string& id, const std::string& name);

    std::string getId() const;
    std::string getName() const;

    void borrowBook(Book& book);
    void returnBook(Book& book);
    bool hasBorrowedBook(const Book& book) const;
};

#endif
