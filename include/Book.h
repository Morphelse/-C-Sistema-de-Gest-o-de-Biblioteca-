#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;

public:
    // Construtor
    Book(std::string title, std::string author, std::string isbn);

    // Métodos getters
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const;
    bool getAvailability() const;

    // Métodos para emprestar e devolver o livro
    void borrowBook();
    void returnBook();
};

#endif
