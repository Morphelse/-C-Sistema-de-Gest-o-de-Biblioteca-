#include "Book.h"

// Construtor da classe Book que inicializa os membros da classe.
// O título, autor e ISBN são passados como parâmetros e o status de disponibilidade
// é definido como 'true' (o livro está disponível por padrão).
Book::Book(std::string title, std::string author, std::string isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true) {}

// Retorna o título do livro.
std::string Book::getTitle() const { return title; }

// Retorna o autor do livro.
std::string Book::getAuthor() const { return author; }

// Retorna o ISBN do livro.
std::string Book::getIsbn() const { return isbn; }

// Retorna a disponibilidade do livro. True se disponível, False se não.
bool Book::getAvailability() const { return isAvailable; }

// Marca o livro como não disponível (emprestado).
void Book::borrowBook() { isAvailable = false; }

// Marca o livro como disponível (devolvido).
void Book::returnBook() { isAvailable = true; }
