#include "Library.h"

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addUser(const User& user) {
    users.push_back(user);
}

Book* Library::findBookByIsbn(const std::string& isbn) {
    for (auto& book : books) {
        if (book.getIsbn() == isbn) {
            return &book;
        }
    }
    return nullptr;
}

User* Library::findUserById(const std::string& userId) {
    for (auto& user : users) {
        if (user.getId() == userId) {
            return &user;
        }
    }
    return nullptr;
}

bool Library::borrowBook(const std::string& isbn, const std::string& userId) {
    Book* book = findBookByIsbn(isbn);
    User* user = findUserById(userId);

    if (book && user && book->getAvailability()) {
        user->borrowBook(*book);
        return true;
    }
    return false;
}

bool Library::returnBook(const std::string& isbn, const std::string& userId) {
    Book* book = findBookByIsbn(isbn);
    User* user = findUserById(userId);

    if (book && user) {
        user->returnBook(*book);
        book->returnBook();
        return true;
    }
    return false;
}
