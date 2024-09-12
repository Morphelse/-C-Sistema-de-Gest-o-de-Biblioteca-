#include "Book.h"

Book::Book(std::string title, std::string author, std::string ISBN)
    : title(title), author(author), ISBN(ISBN), available(true) {}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return ISBN; }
bool Book::isAvailable() const { return available; }

void Book::borrow() { available = false; }
void Book::returnBook() { available = true; }

bool Book::operator==(const Book& other) const {
    return ISBN == other.ISBN;  // Compare based on ISBN
}
