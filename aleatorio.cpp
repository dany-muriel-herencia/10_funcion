#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void aleatorio(int a, int b) {
    srand(time(NULL));  // Semilla de números aleatorios

    for(int i = 0; i < b; ++i) {
        int c = 0+rand() % (a);  // Genera número aleatorio entre 0 y a
        cout << c << " ";  // Imprime el número aleatorio con un espacio
    }
    cout << endl;  // Nueva línea al final de la salida
}

int main(){
    int a, b;
    cout << "Introduzca el valor máximo: "; cin >> a;
    cout << "Ingrese el número de números aleatorios que quiere usted: "; cin >> b;

    aleatorio(a, b);  // Llamada a la función con los parámetros

    return 0;
}


