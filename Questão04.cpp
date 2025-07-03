#include<iostream>

int main(){
    int x=5, y=2;
    float f1=5.0, f2=2.0;
    double d1=5.0, d2=2.0;
    
    //operacoes
    
    int resultadoInt=x/y;
    float resultadoFloat=f1/f2;
    double resultadoDouble=d1/d2;
    
     std::cout << "Divisao com int (5 / 2): " << resultadoInt <<  ("perde a parte decimal")<< std::endl;
      std::cout << "Divisao com flout (5.0 / 2.0): " << std::fixed<< resultadoFloat << std::endl;
      std::cout << "Divisao com double (5.0 / 2.0): "  << std::fixed<< resultadoDouble << std::endl;
     
    

}
