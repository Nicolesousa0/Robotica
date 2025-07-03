#include <iostream>

float maior(float a, float b) {
    return (a > b) ? a : b;
}

int main() {
    float num1, num2;

    std::cout << "informe o numero1: ";
     std::cin >> num1;

    std::cout << "informe o numero2: ";
    std::cin >> num2;

    float resultado = maior(num1, num2);

    std::cout << "O maior numero entre " << num1 << " e " << num2 << " é: " << resultado << std::endl;
}
