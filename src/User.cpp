#include "User.h"
#include <algorithm>  // Inclua este cabeçalho para std::find

User::User(const std::string& id, const std::string& name)
    : id(id), name(name) {}

std::string User::getId() const { return id; }
std::string User::getName() const { return name; }

void User::borrowBook(Book& book) {
    if (book.isAvailable()) {
        borrowedBooks.push_back(book);
        book.borrow();
    }
}

void User::returnBook(Book& book) {
    auto it = std::find(borrowedBooks.begin(), borrowedBooks.end(), book);
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
        book.returnBook();
    }
}

bool User::hasBorrowedBook(const Book& book) const {
    return std::find(borrowedBooks.begin(), borrowedBooks.end(), book) != borrowedBooks.end();
}
