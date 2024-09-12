#ifndef USER_H
#define USER_H

#include <vector>
#include "Book.h"

class User {
private:
    std::string nome;
    std::vector<Book> borrowedBooks;

public:
    User(const std::string& n) : nome(n) {}

    void emprestaLivroParaUsuario(Book& book);
    void returnBook(Book& book);
    bool hasBorrowedBook(const Book& book) const;

    std::string getNome() const { return nome; }
};

#endif // USER_H
