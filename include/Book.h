#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;
    bool available;

public:
    Book(std::string title, std::string author, std::string ISBN);

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    bool isAvailable() const;

    void borrow();  // Marks the book as borrowed
    void returnBook();  // Marks the book as available again

    bool operator==(const Book& other) const;  // Comparison operator
};

#endif
