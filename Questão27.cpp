#include <iostream>
using namespace std;


const float limite_saque = 1500.0;
const float limite_deposito = 10000.0;


float saldo = 5000.0;


void consultaSaldo() {
    cout << "Saldo : R$ " << saldo << endl;
}


void saque() {
    float valor;
    cout << "qual o valor para saque: R$ ";
    cin >> valor;

    if (valor > limite_saque) {
        cout << "Erro: O limite de saque por operação é R$ " << limite_saque << endl;
    }
    else if (valor > saldo) {
        cout << "Erro: Saldo insuficiente!" << endl;
    }
    else if (valor <= 0) {
        cout << "Erro: Valor inválido!" << endl;
    }
    else {
        saldo -= valor;
        cout << "Saque realizado com sucesso. Novo saldo: R$ " << saldo << endl;
    }
}


void deposito() {
    float valor;
    cout << "qual o valor para depósito: R$ ";
    cin >> valor;

    if (valor > limite_deposito) {
        cout << "Erro: O limite de depósito por operação é R$ " <<limite_deposito << endl;
    } else if (valor <= 0) {
        cout << "Erro: Valor inválido!" << endl;
    } else {
        saldo += valor;
        cout << "Depósito realizado com sucesso. Novo saldo: R$ " << saldo << endl;
    }
}


int main() {
    int opcao;
    do {
        cout << "\n CAIXA ELETRÔNICO " << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2.Depósito" << endl;
        cout << "3. Saque" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                consultaSaldo();
                break;
            case 2:
                saque();
                break;
            case 3:
                deposito();
                break;
            case 4:
                cout << "Obrigado por sua preferecia " << endl;
                break;
            default:
                cout << "Opção inválida." << endl;
        }
    } while (opcao != 4);
}
