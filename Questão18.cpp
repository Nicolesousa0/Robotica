#include <iostream>
using namespace std;

void incrementar(int* p){
    (*p)++;
    
    }
    
    int main(){
        int x=5;
        
        cout<< "antes:x= "<<x<<endl;
        
        incrementar(&x);
        
        cout<<"depois:x= "<<x<<endl;
        
        }
