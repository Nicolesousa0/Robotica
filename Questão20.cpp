#include <iostream>
using namespace std;
#include <string>

void verificarSituacao(string nome, float nota) {
    cout << "estudante: " << nome << endl;
    cout << "Nota: " << nota << endl;
    
    if (nota >= 6.0) {
        cout << "Situação: Aprovado" << endl;
    } else {
        cout << "Situação: Reprovado" << endl;
    }
}

int main() {
    string nomeAluno;
    float notaAluno;

    
    cout << "Digite o nome do aluno: ";
    getline(cin, nomeAluno); 

    cout << "Digite a nota do aluno: ";
    cin >> notaAluno;

   
    verificarSituacao(nomeAluno, notaAluno);
}
