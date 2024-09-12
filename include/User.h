#ifndef USER_H   // Proteção para evitar múltiplas inclusões
#define USER_H

#include <string>  // Biblioteca padrão para usar strings
#include <vector>  // Biblioteca padrão para usar vetores
#include "Book.h"  // Inclui a definição da classe Book

class User {
private:
    std::string name;  // Nome do usuário
    std::string id;    // ID do usuário
    std::vector<Book> borrowedBooks;  // Livros emprestados pelo usuário

public:
    // Construtor da classe, inicializa 'name' e 'id'
    User(std::string name, std::string id);

    // Método getter para acessar o nome do usuário
    std::string getName() const;

    // Método getter para acessar o ID do usuário
    std::string getId() const;

    // Função para adicionar um livro emprestado ao usuário
    void borrowBook(Book& book);

    // Função para remover um livro emprestado do usuário
    void returnBook(Book& book);

    // Retorna a lista de livros emprestados pelo usuário
    std::vector<Book> getBorrowedBooks() const;
};

#endif  // Fim da proteção de múltiplas inclusões
