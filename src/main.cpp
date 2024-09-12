#include <iostream>
#include "Library.h"
#include "Book.h"
#include "User.h"

void showMenu() {
    std::cout << "==== Biblioteca ====\n";
    std::cout << "1. Adicionar Livro\n";
    std::cout << "2. Adicionar Usuário\n";
    std::cout << "3. Emprestar Livro\n";
    std::cout << "4. Devolver Livro\n";
    std::cout << "5. Sair\n";
    std::cout << "Escolha uma opção: ";
}

void createBook(Library& library) {
    std::string title, author, isbn;
    std::cout << "Título do livro: ";
    std::cin.ignore(); // Limpa buffer do input anterior
    std::getline(std::cin, title);
    std::cout << "Autor do livro: ";
    std::getline(std::cin, author);
    std::cout << "ISBN do livro: ";
    std::getline(std::cin, isbn);

    // Cria e adiciona o livro à biblioteca
    Book newBook(title, author, isbn);
    library.addBook(newBook);
    std::cout << "Livro adicionado com sucesso!\n";
}

void createUser(Library& library) {
    std::string name, id;
    std::cout << "Nome do usuário: ";
    std::cin.ignore(); // Limpa buffer do input anterior
    std::getline(std::cin, name);
    std::cout << "ID do usuário: ";
    std::getline(std::cin, id);

    // Cria e adiciona o usuário à biblioteca
    User newUser(name, id);
    library.addUser(newUser);
    std::cout << "Usuário adicionado com sucesso!\n";
}

void borrowBook(Library& library) {
    std::string isbn, userId;
    std::cout << "ISBN do livro a ser emprestado: ";
    std::cin >> isbn;
    std::cout << "ID do usuário: ";
    std::cin >> userId;

    // Tenta realizar o empréstimo
    if (library.borrowBook(isbn, userId)) {
        std::cout << "Empréstimo realizado com sucesso!\n";
    } else {
        std::cout << "Falha no empréstimo! Verifique se o livro está disponível ou se o usuário existe.\n";
    }
}

void returnBook(Library& library) {
    std::string isbn, userId;
    std::cout << "ISBN do livro a ser devolvido: ";
    std::cin >> isbn;
    std::cout << "ID do usuário: ";
    std::cin >> userId;

    // Tenta realizar a devolução
    if (library.returnBook(isbn, userId)) {
        std::cout << "Devolução realizada com sucesso!\n";
    } else {
        std::cout << "Falha na devolução! Verifique se o livro ou usuário estão corretos.\n";
    }
}

int main() {
    Library library;
    int option;

    // Loop principal da interface de terminal
    while (true) {
        showMenu();
        std::cin >> option;

        switch (option) {
            case 1:
                createBook(library);
                break;
            case 2:
                createUser(library);
                break;
            case 3:
                borrowBook(library);
                break;
            case 4:
                returnBook(library);
                break;
            case 5:
                std::cout << "Saindo...\n";
                return 0;
            default:
                std::cout << "Opção inválida! Tente novamente.\n";
        }
        std::cout << "\n"; // Espaçamento para a próxima interação
    }

    return 0;
}
