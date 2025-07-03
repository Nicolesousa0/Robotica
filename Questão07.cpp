#include <iostream>

bool ehPar(int numero){
    return numero %2==0;
     }
     
     int main(){
         int valor;
         
         std::cout<<"informe um numero inteiro: ";
         std::cin>>valor;
         
         //par ou impar
         if(ehPar(valor)){
             std::cout<<valor<<"é um numero par."<< std::endl;}
             else{
                 std::cout<<valor<<"é um numero impar."<<std::endl;}
         
         }
