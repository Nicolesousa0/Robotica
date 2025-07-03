#include <iostream>

void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x,y;
    
    std::cout << "o valor de x: ";
    std::cin >> x;

    std::cout << "o valor de y: ";
    std::cin >> y;

std::cout<<"\n antes da troca: \n";
std::cout<<"x= " <<x<<",y= "<<y<< std::endl;

trocar(&x,&y);

std::cout << "\n Depois da troca:\n";
    std::cout << "x = " << x << ", y = " << y << std::endl;

    
    }
