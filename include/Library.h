#ifndef BIBLI_H      // Proteção contra múltiplas inclusões do mesmo arquivo de cabeçalho
#define BIBLI_H

#include <string>     // Inclui a biblioteca para usar a classe std::string
#include <vector>     // Inclui a biblioteca para usar a classe std::vector (vetor dinâmico)
#include "Book.h"     // Inclui a definição da classe Book (arquivo externo)
#include "User.h"     // Inclui a definição da classe User (arquivo externo)

// Definição da classe Library, que gerencia livros e usuários
class Library
{
private:
    // Atributos privados
    // std::vector<Book> cria um vetor de objetos da classe Book
    std::vector<Book> livros;   // Vetor dinâmico para armazenar uma coleção de livros

    // std::vector<User> cria um vetor de objetos da classe User
    std::vector<User> usuarios; // Vetor dinâmico para armazenar uma coleção de usuários

public:
    // Função pública para adicionar um novo livro à coleção da biblioteca
    // O parâmetro é passado por referência constante (&) para evitar cópias desnecessárias
    void adicionarLivro(const Book& livro);

    // Função pública para adicionar um novo usuário à coleção da biblioteca
    void adicionarUsuario(const User& usuario);

    // Você pode adicionar mais métodos, como para buscar, remover ou listar livros e usuários.
};

#endif  // Fim da proteção contra múltiplas inclusões
