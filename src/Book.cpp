#include "Book.h"

Book::Book(std::string title, std::string author, std::string isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true) {}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getIsbn() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }

void Book::borrowBook() { isAvailable = false; }
void Book::returnBook() { isAvailable = true; }
