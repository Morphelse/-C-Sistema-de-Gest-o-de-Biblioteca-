#include "Book.h"

// Não é necessário redefinir getTitulo(), getAutor(), e getISBN() aqui, pois já estão implementadas no cabeçalho.

void Book::emprestar() {
    if (disponivel) {
        disponivel = false;
    } else {
        std::cerr << "Livro já emprestado!" << std::endl;
    }
}

void Book::devolver() {
    if (!disponivel) {
        disponivel = true;
    } else {
        std::cerr << "Livro já está disponível!" << std::endl;
    }
}

bool Book::operator==(const Book& other) const {
    return ISBN == other.ISBN;
}
