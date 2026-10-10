#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> historial;
    int opcion;
    string accion;
    
    do {
        cout << "\n---HISTORIAL DE ACCIONES---\n";
        cout << "1. Realizar nueva accion (ej. escribir, copiar, eliminar)\n";
        cout << "2. Deshacer ultima accion (Undo)\n";
        cout << "3. Ver la accion ubicada en el tope de la pila\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // 
        
        switch (opcion) {
            case 1:
                cout << "Ingrese la descripcion de la accion: ";
                getline(cin, accion);
                historial.push(accion);
                cout << "Accion registrada exitosamente.\n";
                break;
                
            case 2:
                if (!historial.empty()) {
                    cout << "DESHACER -> Se revierte \"" << historial.top() << "\"\n";
                    historial.pop();
                } else {
                    cout << "El historial esta vacio. No hay acciones para deshacer.\n";
                }
                break;
                
            case 3:
                if (!historial.empty()) {
                    cout << "Accion en el tope (ultima realizada): \"" << historial.top() << "\"\n";
                } else {
                    cout << "El historial esta vacio.\n";
                }
                break;
                
            case 4:
                cout << "Saliendo del programa...\n";
                break;
                
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 4);
    
    return 0;
}