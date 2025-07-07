#include <iostream>
using namespace std;


template <typename T>
void trocar(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 15, y = 7;
    float a = 1.5, b = 3.7;

    cout << "sem trocar (int): x = " << x << ", y = " << y << endl;
    trocar(&x, &y);
    cout << "trocado (int): x = " << x << ", y = " << y<< endl;

    cout << "\nsem trocar (float): a = " << a << ", b = " << b << endl;
    trocar(&a, &b);
    cout << "trocado (float): a = " << a << ", b = " << b << endl;

    return 0;
}
