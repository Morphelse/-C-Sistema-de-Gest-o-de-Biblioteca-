#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro {
private:
    std::string titulo;
    std::string autor;
    std::string ISBN;
    bool disponivel;

public:
    // Construtor
    Livro(std::string titulo, std::string autor, std::string ISBN);

    // Métodos getters
    std::string getTitulo();
    std::string getAutor();
    std::string getISBN();
    bool isDisponivel();

    // Métodos para emprestar e devolver o livro
    void emprestar();
    void devolver();
};

#endif
