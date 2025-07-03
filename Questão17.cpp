#include <iostream>
using namespace std;

void alterar (int valor, int &referencia) {
    valor += 10;
    referencia += 10;
    
     cout << "Dentro da função:" << endl;
    cout << "Valor (por valor): " << valor << endl;
    cout << "Referencia (por referência): " << referencia << endl;
    
    }
    
    int main(){
        int a = 5, b = 10;

    cout << "Antes da função:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    alterar(a, b);

    cout << "Depois da função:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

        
        }
