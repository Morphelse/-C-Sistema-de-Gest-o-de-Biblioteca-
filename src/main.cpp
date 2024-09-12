#include <iostream>
#include "Library.h"

int main() {
    Library library;

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "1234567890");
    Book book2("1984", "George Orwell", "0987654321");

    library.addBook(book1);
    library.addBook(book2);

    User user("John Doe");
    library.registerUser(user);

    library.borrowBook("John Doe", "1234567890"); // Empréstimo
    library.returnBook("John Doe", "1234567890"); // Devolução

    return 0;
}
