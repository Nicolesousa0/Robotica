#include <iostream>

int quadrado(int numero){
    return numero*numero;
    }
    
    int main(){
        int valor;
        
        std::cout<<"informe um numero inteiro: ";
        std::cin>>valor;
        
        int resultado = quadrado(valor);
        
        std::cout << "O quadrado de " << valor <<" é : " << resultado << std::endl;
        
        
          }
