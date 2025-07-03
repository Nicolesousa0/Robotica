#include<iostream>
const double pi=3.14;

int main(){
    double raio;
    
    std::cout << "informe o raio do circulo: ";
    std::cin>>raio;
    
    double area = pi * raio * raio;

     std::cout << "a area e" << raio << " é: " << area << std::endl;

    

}
