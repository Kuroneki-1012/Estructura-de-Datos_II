#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int numero;
    
    cout << "Ingrese 5 numeros enteros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numero;
        pila.push(numero);
    }
    cout << "\nElementos retirados de la pila (orden LIFO):\n";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;
    
    return 0;
}