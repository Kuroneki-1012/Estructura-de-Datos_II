#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool estanBalanceados(const string& expresion) {
    stack<char> pila;
    for (char c : expresion) {
        if (c == '(') {
            pila.push(c);
        } else if (c == ')') {
            if (pila.empty()) {
                return false;
            }
            pila.pop();
        }
    }
    return pila.empty();
}

int main() {
    string expresion;
    cout << "Ingrese una expresion: ";
    cin >> expresion;
    
    if (estanBalanceados(expresion)) {
        cout << "Resultado: Correcto (balanceado)." << endl;
    } else {
        cout << "Resultado: Incorrecto (no balanceado)." << endl;
    }
    
    return 0;
}