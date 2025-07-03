#include <iostream>
#include <string> 
 
 
int main(){
    std:: string nome;
    int idade;
    
    //nome
    std::cout<<"informe seu nome: ";
    std::getline(std::cin, nome); 
    
    //idade
     std::cout << "informe sua idade: ";
     std::cin >> idade;
    
    std::cout<<" oiii, "<<nome<<"! voce tem "<<idade<<" aninhos."<< std::endl;
    }
