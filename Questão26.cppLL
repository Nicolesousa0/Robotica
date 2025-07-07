#include <iostream>
using namespace std;

void soma() {
    float a, b;
    cout << " número1 para somar: ";
    cin >> a;
     cout << " número2 para somar: ";
    cin >>b;
    cout << "soma: " << (a + b) << endl;
}

void subtracao() {
    float a, b;
    cout << "número1 para subtrair: ";
    cin >> a;
    cout << "número2 para subtrair: ";
    cin >>b;
    cout << "subtração: " << (a - b) << endl;
}

void multiplicacao() {
    float a, b;
    cout << "número1 para multiplicar: ";
    cin >> a;
    cout << "número2 para multiplicar: ";
    cin>>b;
    cout << " multiplicação: " << (a * b) << endl;
}

int main() {
    int opcao;
    do {
        cout << "\n calculos" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                soma();
                break;
            case 2:
                subtracao();
                break;
            case 3:
                multiplicacao();
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while(opcao != 4);
}
