#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> residuos;
    int numero;
    
    cout << "Ingrese un numero entero decimal positivo: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "El numero debe ser positivo." << endl;
        return 0;
    }
    
    if (numero == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }
    
    int temp = numero;
    while (temp > 0) {
        residuos.push(temp % 2);
        temp /= 2;
    }
    
    cout << "Binario de " << numero << ": ";
    while (!residuos.empty()) {
        cout << residuos.top();
        residuos.pop();
    }
    cout << endl;
    
    return 0;
}