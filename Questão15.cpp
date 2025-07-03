#include <iostream>

void verificaraprovacao(float* nota) {
    if (*nota >= 7.0) {
        std::cout << "aprovado! Nota: " << *nota << std::endl;
    } else {
        std::cout << "reprovado! Nota: " << *nota << std::endl;
    }
}

int main() {
    float nota;

    std::cout << "informe a nota do aluno: ";
    std::cin >> nota;

    
    verificaraprovacao(&nota);

    
}
