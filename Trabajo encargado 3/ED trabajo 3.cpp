#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n;
    int maximo, minimo, quintil2;
    double promedio, varianza, desviacionEstandar, coeficienteVariacion;
    cout << "Ingrese el numero de datos: ";
    cin >> n;
    vector<double> datos(n);

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el dato " << i + 1 << ": ";
        cin >> datos[i];
    }
    sort(datos.begin(), datos.end());
    //promedio
    promedio = accumulate(datos.begin(), datos.end(), 0.0) / n;

    //Maximo
    maximo = datos[n - 1];
    //Minimo
    minimo = datos[0];
    //Quintil 2
    quintil2;
    if(n%2 == 0) {
        quintil2 = (datos[n / 2 - 1] + datos[n / 2]) / 2;
    } else {
        quintil2 = datos[n / 2];
    }
    //Var
    varianza = 0;
    for (int i = 0; i < n; i++) {
        varianza += pow(datos[i] - promedio, 2);
    }
    //desviacion estandar
    desviacionEstandar = sqrt(varianza / n);
    //coeficiente de variacion
    coeficienteVariacion = (desviacionEstandar / promedio) * 100;
    
    cout <<"Minimo valor: \n" << minimo << endl;
    cout <<"Maximo valor: \n" << maximo << endl;
    cout <<"Quintil 2: \n" << quintil2 << endl;
    cout <<"Varianza: \n" << varianza << endl;
    cout <<"Desviacion estandar: \n" << desviacionEstandar << endl;
    cout <<"Coeficiente de variacion: \n" << coeficienteVariacion << "%" << endl;

    //diagrama de barras
    cout << "\n     DIAGRAMA DE BARRAS      \n" << endl;
    double valorMaximo = datos[n - 1];
    for (int i = 0; i < n; i++) {
        cout << "Dato " << i + 1 << " | ";
        int longitudBarra = 0;
        if (valorMaximo > 0) {
            longitudBarra = static_cast<int>((datos[i] / valorMaximo) * 30);
        }
        for (int j = 0; j < longitudBarra; j++) {
            cout << "█";
        }
        cout << " (" << datos[i] << ")" << endl;
    }

    return 0;
}