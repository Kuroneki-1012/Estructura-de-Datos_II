#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> pila;
    string palabra;
    
    cout << "Ingrese una palabra: ";
    cin >> palabra;
 
    for (char c : palabra) {
        pila.push(c);
    }
    
    cout << "Palabra invertida: ";
    while (!pila.empty()) {
        cout << pila.top();
        pila.pop();
    }
    cout << endl;
    
    return 0;
}