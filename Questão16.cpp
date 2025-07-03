#include <iostream>
using namespace std;

void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
cout << "Antes da troca: x = " << x << ", y = " << y << endl;

    trocar(x, y);

    cout << "Depois da troca: x = " << x << ", y = " << y << endl;

}
