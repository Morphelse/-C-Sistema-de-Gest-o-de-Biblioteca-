#include "Library.h"
#include <algorithm>
#include <iostream>

bool Library::addBook(const Book& book) {
    books.push_back(book);
    return true;
}

bool Library::registerUser(const User& user) {
    users.push_back(user);
    return true;
}

Book* Library::findBookByIsbn(const std::string& isbn) {
    auto it = std::find_if(books.begin(), books.end(), [&isbn](Book& book) {
        return book.getISBN() == isbn;
    });
    return it != books.end() ? &(*it) : nullptr;
}

User* Library::findUserByName(const std::string& name) {
    auto it = std::find_if(users.begin(), users.end(), [&name](User& user) {
        return user.getNome() == name;
    });
    return it != users.end() ? &(*it) : nullptr;
}

bool Library::borrowBook(const std::string& userName, const std::string& isbn) {
    Book* book = findBookByIsbn(isbn);
    User* user = findUserByName(userName);

    if (book && user && book->isDisponivel()) {
        user->emprestaLivroParaUsuario(*book);
        return true;
    } else {
        std::cerr << "Falha no empréstimo do livro '" << isbn << "'." << std::endl;
        return false;
    }
}

bool Library::returnBook(const std::string& userName, const std::string& isbn) {
    Book* book = findBookByIsbn(isbn);
    User* user = findUserByName(userName);

    if (book && user && user->hasBorrowedBook(*book)) {
        user->returnBook(*book);
        return true;
    } else {
        std::cerr << "Falha na devolução do livro '" << isbn << "'." << std::endl;
        return false;
    }
}
