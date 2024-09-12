#include <iostream>
#include "Library.h"

int main() {
    Library library;

    // Criando alguns livros e usuários
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "1234567890123");
    Book book2("1984", "George Orwell", "9876543210123");

    User user1("Alice", "U001");
    User user2("Bob", "U002");

    // Adicionando livros e usuários à biblioteca
    library.addBook(book1);
    library.addBook(book2);
    library.addUser(user1);
    library.addUser(user2);

    // Tentativa de empréstimo
    if (library.borrowBook("1234567890123", "U001")) {
        std::cout << "Livro 'The Great Gatsby' emprestado com sucesso para Alice." << std::endl;
    } else {
        std::cout << "Falha no empréstimo do livro 'The Great Gatsby'." << std::endl;
    }

    // Tentativa de devolução
    if (library.returnBook("1234567890123", "U001")) {
        std::cout << "Livro 'The Great Gatsby' devolvido com sucesso por Alice." << std::endl;
    } else {
        std::cout << "Falha na devolução do livro 'The Great Gatsby'." << std::endl;
    }

    return 0;
}
