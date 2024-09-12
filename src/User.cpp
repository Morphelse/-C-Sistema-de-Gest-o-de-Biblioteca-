#include "User.h"
#include <algorithm> // Inclua este cabeçalho para std::find_if

User::User(const std::string& name, const std::string& id)
    : name(name), id(id) {}

std::string User::getName() const { return name; }
std::string User::getId() const { return id; }

void User::borrowBook(Book& book) {
    if (book.getAvailability()) {
        borrowedBooks.push_back(book);
        book.borrowBook();
    }
}

void User::returnBook(Book& book) {
    // Remove o livro da lista de livros emprestados
    auto it = std::find_if(borrowedBooks.begin(), borrowedBooks.end(),
        [&book](const Book& b) { return b.getIsbn() == book.getIsbn(); });

    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
        book.returnBook();
    }
}

std::vector<Book> User::getBorrowedBooks() const { return borrowedBooks; }
