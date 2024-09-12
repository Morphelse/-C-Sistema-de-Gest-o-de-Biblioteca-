#include "Library.h"

// Função que adiciona um livro ao vetor de livros da biblioteca.
void Library::addBook(const Book& book) {
    books.push_back(book);  // Insere o livro na lista de livros
}

// Função que adiciona um usuário ao vetor de usuários da biblioteca.
void Library::addUser(const User& user) {
    users.push_back(user);  // Insere o usuário na lista de usuários
}

// Função que busca um livro pelo ISBN.
// Retorna um ponteiro para o livro se for encontrado, ou nullptr se não.
Book* Library::findBookByIsbn(const std::string& isbn) {
    // Percorre a lista de livros
    for (auto& book : books) {
        // Se o ISBN corresponder, retorna um ponteiro para o livro
        if (book.getIsbn() == isbn) {
            return &book;
        }
    }
    return nullptr;  // Retorna nullptr se o livro não for encontrado
}

// Função que busca um usuário pelo ID.
// Retorna um ponteiro para o usuário se for encontrado, ou nullptr se não.
User* Library::findUserById(const std::string& userId) {
    // Percorre a lista de usuários
    for (auto& user : users) {
        // Se o ID corresponder, retorna um ponteiro para o usuário
        if (user.getId() == userId) {
            return &user;
        }
    }
    return nullptr;  // Retorna nullptr se o usuário não for encontrado
}

// Função que gerencia o empréstimo de um livro.
// Verifica se o livro está disponível e se o usuário existe. Em caso positivo, faz o empréstimo.
bool Library::borrowBook(const std::string& isbn, const std::string& userId) {
    // Encontra o livro pelo ISBN
    Book* book = findBookByIsbn(isbn);
    // Encontra o usuário pelo ID
    User* user = findUserById(userId);

    // Verifica se o livro foi encontrado, o usuário existe e o livro está disponível
    if (book && user && book->getAvailability()) {
        user->borrowBook(*book);  // Adiciona o livro à lista de empréstimos do usuário
        return true;  // Empréstimo bem-sucedido
    }
    return false;  // Falha no empréstimo (livro não encontrado, usuário não encontrado ou livro não disponível)
}

// Função que gerencia a devolução de um livro.
// Verifica se o livro e o usuário existem. Em caso positivo, realiza a devolução.
bool Library::returnBook(const std::string& isbn, const std::string& userId) {
    // Encontra o livro pelo ISBN
    Book* book = findBookByIsbn(isbn);
    // Encontra o usuário pelo ID
    User* user = findUserById(userId);

    // Verifica se o livro e o usuário foram encontrados
    if (book && user) {
        user->returnBook(*book);  // Remove o livro da lista de empréstimos do usuário
        book->returnBook();  // Marca o livro como disponível
        return true;  // Devolução bem-sucedida
    }
    return false;  // Falha na devolução (livro ou usuário não encontrados)
}
