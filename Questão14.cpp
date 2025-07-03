#include <iostream>

void exibirvetor(int*vetor, int comprimento){
    std::cout<<" elementos: "<<std::endl;
    for(int i=0; i<comprimento; ++i){
        std::cout<<"elemento" <<i<<": " <<*(vetor + i) <<std::endl;}
         }
         
         int main(){
             int numeros[5];
             
             std::cout <<" informe os 5 numeros: " <<std::endl;
             for (int i = 0; i < 5; ++i) {
                  std::cout << "Numero " << i << ": ";
        std::cin >> numeros[i];
    }
    
    exibirvetor(numeros, 5);
             
             }
