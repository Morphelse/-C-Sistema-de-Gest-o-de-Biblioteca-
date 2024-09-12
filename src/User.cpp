#include "User.h"
#include "Book.h"
#include <algorithm>  // Para std::find

User::User(std::string name, std::string id) : name(name), id(id) {}

std::string User::getName() const { return name; }
std::string User::getId() const { return id; }

void User::borrowBook(Book& book) {
    if (book.getAvailability()) {
        borrowedBooks.push_back(book);
        book.borrowBook();
    }
}

void User::returnBook(Book& book) {
    auto it = std::find(borrowedBooks.begin(), borrowedBooks.end(), book);
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
        book.returnBook();
    }
}

std::vector<Book> User::getBorrowedBooks() const { return borrowedBooks; }
