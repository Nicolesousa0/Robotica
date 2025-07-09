funcoes.h: 
#pragma once

// Função que recebe um parâmetro por valor
void imprimirValor(int x);

// Função que recebe um parâmetro por referência
void imprimirReferencia(int& x);

// Função que recebe um ponteiro como parâmetro
void imprimirPonteiro(int* x);

// Função que modifica um valor por referência
void modificarReferencia(int& x);

// Função que modifica um valor por ponteiro
void modificarPonteiro(int* x);

funcoes.cpp:
#include "funcoes.h"
#include <iostream>

// Função que recebe um parâmetro por valor
void imprimirValor(int x) {
    std::cout << "Valor: " << x << std::endl;
}

// Função que recebe um parâmetro por referência
void imprimirReferencia(int& x) {
    std::cout << "Referência: " << x << std::endl;
}

// Função que recebe um ponteiro como parâmetro
void imprimirPonteiro(int* x) {
    std::cout << "Ponteiro: " << *x << std::endl;
}

// Função que modifica um valor por referência
void modificarReferencia(int& x) {
    x = x * 2;
}

// Função que modifica um valor por ponteiro
void modificarPonteiro(int* x) {
    *x = *x * 2;
}

main.cpp: 
#include "funcoes.h"
#include <iostream>

int main() {
    int x = 5;

    // Passagem por valor
    std::cout << "Passagem por valor:" << std::endl;
    imprimirValor(x);

    // Passagem por referência
    std::cout << "\nPassagem por referência:" << std::endl;
    imprimirReferencia(x);

    // Passagem por ponteiro
    std::cout << "\nPassagem por ponteiro:" << std::endl;
    imprimirPonteiro(&x);

    // Modificação por referência
    std::cout << "\nModificação por referência:" << std::endl;
    std::cout << "Antes: " << x << std::endl;
    modificarReferencia(x);
    std::cout << "Depois: " << x << std::endl;

    // Modificação por ponteiro
    std::cout << "\nModificação por ponteiro:" << std::endl;
    std::cout << "Antes: " << x << std::endl;
    modificarPonteiro(&x);
    std::cout << "Depois: " << x << std::endl;

    return 0;
}
