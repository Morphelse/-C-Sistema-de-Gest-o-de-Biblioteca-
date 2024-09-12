#include "utils.h"   // Inclui o cabeçalho com a declaração da função isValidIsbn
#include <cctype>    // Inclui a biblioteca cctype, que contém a função isdigit para verificar se um caractere é um dígito

// Implementação da função isValidIsbn, que verifica se o ISBN fornecido é válido
bool isValidIsbn(const std::string& isbn) {
    // Validação básica: verifica se o comprimento do ISBN é igual a 13
    if (isbn.length() != 13) return false;

    // Percorre cada caractere da string ISBN
    for (char c : isbn) {
        // Se algum caractere não for um dígito, retorna false
        if (!isdigit(c)) return false;
    }

    // Se todos os caracteres forem dígitos e o tamanho for 13, retorna true
    return true;
}
