#include<iostream>
#include<string>

int main() {
    std :: string nome;
    int idade;
    
    std :: cout <<"Informe seu nome: " <<std :: endl;
    std :: getline(std::cin, nome);
    
    std :: cout <<"Informe sua idade: " <<std :: endl;
    std :: cin>>idade;
    
    std :: cout <<nome<<", voce possui "<<idade<<" anos." <<std :: endl;
    
    }
