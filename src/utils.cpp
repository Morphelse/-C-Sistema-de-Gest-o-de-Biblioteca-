#include "utils.h"
#include <cctype>

bool isValidIsbn(const std::string& isbn) {
    if (isbn.length() != 13) return false;
    for (char c : isbn) {
        if (!isdigit(c)) return false;
    }
    return true;
}
