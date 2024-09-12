#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream> // Adicione esta linha para std::cerr e std::endl

class Book {
private:
    std::string titulo;
    std::string autor;
    std::string ISBN;
    bool disponivel;

public:
    Book(const std::string& t, const std::string& a, const std::string& isbn)
        : titulo(t), autor(a), ISBN(isbn), disponivel(true) {}

    std::string getTitulo() const { return titulo; }
    std::string getAutor() const { return autor; }
    std::string getISBN() const { return ISBN; }
    bool isDisponivel() const { return disponivel; }

    void emprestar();
    void devolver();

    bool operator==(const Book& other) const;
};

#endif // BOOK_H
