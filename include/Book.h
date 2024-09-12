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
    Book(const std::string& title, const std::string& author, const std::string& isbn);
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getIsbn() const;
    bool getAvailability() const;
    void borrowBook();
    void returnBook();
};

#endif
