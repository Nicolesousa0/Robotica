#include <iostream>
using namespace std;


float calcularAreaRetangulo(float base, float altura) {
    return base * altura;
}

int main() {
    float base, altura;
    cout << "informe a base do retângulo: ";
    cin >> base;

    cout << "informe a altura do retângulo: ";
    cin >> altura;

    
    float area = calcularAreaRetangulo(base, altura);


    cout << "A área do retângulo é: " << area << endl;
}
