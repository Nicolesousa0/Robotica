#include <iostream>
using namespace std;


float calcularMedia(int* vetor, int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor + i); 
        
    }
    return static_cast<float>(soma) / tamanho;
}

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    float media = calcularMedia(vetor, 10);

    cout << "A média é: " << media << endl;

    
}
