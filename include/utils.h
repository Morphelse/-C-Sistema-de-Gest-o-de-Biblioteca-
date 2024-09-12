#ifndef UTILS_H
#define UTILS_H

#include <string>  // Necessário para usar std::string

// Declaração de uma função que verifica se um ISBN (International Standard Book Number) é válido.
// Recebe uma string que representa o ISBN e retorna um valor booleano: true se for válido, false se não.
bool isValidIsbn(const std::string& isbn);

#endif
