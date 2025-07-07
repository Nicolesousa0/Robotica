#include <iostream>
#include <string>
using namespace std;


struct Pessoa {
    string nome;
    int idade;
    float altura;
};

void imprimirPessoa(Pessoa* p) {
    cout << "Nome: " << p->nome << endl;
    cout << "Idade: " << p->idade << " aninhos" << endl;
    cout << "Altura: " << p->altura << " metros" << endl;
}


int main() {
    Pessoa pessoa1;

   
    cout << "Digite o nome: ";
    getline(cin, pessoa1.nome);

    cout << "Digite a idade: ";
    cin >> pessoa1.idade;

    cout << "Digite a altura (em metros): ";
    cin >> pessoa1.altura;

    cout << "\n Dados pessoais" << endl;
    imprimirPessoa(&pessoa1); // Passando endereço (ponteiro) da estrutura

    return 0;
}
