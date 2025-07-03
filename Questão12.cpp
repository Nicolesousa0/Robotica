#include <iostream>
void dobrarvalor(int*ptr){
    *ptr=(*ptr)*2;
    }

int main(){
    int numero;
    
    std::cout << "informe um numero: ";
    std::cin >> numero;

    dobrarvalor(&numero);

    std::cout << "O dobro é: " << numero << std::endl;

}
