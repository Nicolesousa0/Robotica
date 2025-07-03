#include <iostream>

int main(){
    int numero=55;
    int* ponteiro=&numero;
    
    std::cout<<"variavel: "<<*ponteiro <<std::endl;
    std::cout<<" endereco da variavel: "<<ponteiro<<std::endl;
    
    }
