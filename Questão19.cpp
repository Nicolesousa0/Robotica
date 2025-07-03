#include <iostream>
using namespace std;

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {
    float nota1, nota2, nota3;

    // Entrada das notas
    cout << "informe a nota 1: ";
    cin >> nota1;
    
    cout << "informe a nota 2: ";
    cin >> nota2;

    cout << "informe a nota 3: ";
    cin >> nota3;

    // Chamada da função
    float media = calcularMedia(nota1, nota2, nota3);

    // Exibição da média
    cout << "A média é: " << media << endl;
    }
