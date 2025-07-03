#include <iostream>

//funcao
int soma(int a,int b){
    return a+b;
    }
    
    int main(){
        int num1, num2;
        
        std::cout<<"informe o primeiro numero: ";
         std::cin >> num1;
         
         std::cout<<"informe o segundo numero: ";
          std::cin >> num2;
          
          int resultadoSoma=soma (num1,num2);
          
          std::cout<<" a soma de "<<num1<<" e "<<num2<<" é: "<< resultadoSoma<< std::endl;
          
        
        }
