#ifndef LIBRARY_H      // Proteção contra múltiplas inclusões do mesmo arquivo de cabeçalho
#define LIBRARY_H

#include <string>     // Inclui a biblioteca para usar a classe std::string
#include <vector>     // Inclui a biblioteca para usar a classe std::vector (vetor dinâmico)
#include "Book.h"     // Inclui a definição da classe Book (arquivo externo)
#include "User.h"     // Inclui a definição da classe User (arquivo externo)

// Definição da classe Library, que gerencia livros e usuários
class Library
{
private:
    std::vector<Book> books;   // Vetor dinâmico para armazenar uma coleção de livros
    std::vector<User> users;   // Vetor dinâmico para armazenar uma coleção de usuários

public:
    // Função pública para adicionar um novo livro à coleção da biblioteca
    void addBook(const Book& book);

    // Função pública para adicionar um novo usuário à coleção da biblioteca
    void addUser(const User& user);

    // Função pública para emprestar um livro a um usuário
    bool borrowBook(const std::string& isbn, const std::string& userId);

    // Função pública para devolver um livro
    bool returnBook(const std::string& isbn, const std::string& userId);

private:
    // Função privada para encontrar um livro pelo ISBN
    Book* findBookByIsbn(const std::string& isbn);

    // Função privada para encontrar um usuário pelo ID
    User* findUserById(const std::string& userId);
};

#endif  // Fim da proteção contra múltiplas inclusões
