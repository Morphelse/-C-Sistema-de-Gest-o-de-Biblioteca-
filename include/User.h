#ifndef USER_H   // Proteção para evitar múltiplas inclusões
#define USER_H

#include <string>  // Biblioteca padrão para usar strings

// Declaração da classe User
class User {
private:  // Os atributos são privados e só podem ser acessados por métodos da classe
    std::string nome;  // Nome do usuário
    std::string id;    // ID do usuário

public:
    // Construtor da classe, inicializa 'nome' e 'id'
    User(std::string nome, std::string id);

    // Método getter para acessar o nome do usuário
    std::string getNome();

    // Método getter para acessar o ID do usuário
    std::string getId();

    // Função para simular o empréstimo de um livro para o usuário (pode ser expandida com mais detalhes)
    void emprestaLivroParaUsuario();

    // Função para remover um livro emprestado (pode ser expandida com mais detalhes)
    void removeLivroEmprestado();
};

#endif  // Fim da proteção de múltiplas inclusões
