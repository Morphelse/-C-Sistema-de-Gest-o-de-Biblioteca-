#include "User.h"
#include <algorithm>
#include <iostream>

void User::emprestaLivroParaUsuario(Book& book) {
    if (book.isDisponivel()) {
        borrowedBooks.push_back(book);
        book.emprestar();
        std::cout << "Empréstimo realizado com sucesso!" << std::endl;
    } else {
        std::cerr << "Falha no empréstimo do livro '" << book.getTitulo() << "'." << std::endl;
    }
}

void User::returnBook(Book& book) {
    auto it = std::find(borrowedBooks.begin(), borrowedBooks.end(), book);
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
        book.devolver();
        std::cout << "Devolução realizada com sucesso!" << std::endl;
    } else {
        std::cerr << "Falha na devolução do livro '" << book.getTitulo() << "'." << std::endl;
    }
}

bool User::hasBorrowedBook(const Book& book) const {
    return std::find(borrowedBooks.begin(), borrowedBooks.end(), book) != borrowedBooks.end();
}
