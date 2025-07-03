#include <iostream>

using namespace std;

int n = 8;
int n2 =2;
int resultadoSoma;
int resultadoSubtracao;
int resultadoMultiplicacao;
int resultadoDivisao;
 int soma (int n, int n2){
     return n + n2;}
     
     int subtracao(int n, int n2){
     return n - n2;
     }
       int multiplicacao(int n, int n2){
       return n * n2;
       }
        int divisao(int n, int n2){
        return n / n2;}
     
int main(){

    int resultadoSoma = soma(n,n2);
    int resultadoSubtracao =subtracao(n,n2); 
    int resultadoMultiplicacao =multiplicacao (n,n2);
    int resultadoDivisao =divisao (n,n2); 
    
    cout<< "Resultado da soma: "<< resultadoSoma<<endl;
     cout<< "Resultado da subtração: "<< resultadoSubtracao<<endl;
     cout<< "Resultado da multiplicação: "<< resultadoMultiplicacao<<endl;
     cout<< "Resultado da divisão: "<< resultadoDivisao<<endl;
}
