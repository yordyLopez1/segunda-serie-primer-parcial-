/*3. Escribe una función en C++ llamada esPrimo que reciba un número entero como parámetro y devuelva
true si es primo y false si no lo es. Luego, en el main(), pide al usuario un número y muestra si es primo o no. */

#include <iostream>
using namespace std;

bool esPrimo(int numero1) {
    if (numero1 <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero1; ++i) {
        if (numero1 % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero1,num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (esPrimo(num)) {
        cout << num << " es un numero primo." << endl;
    } else {
        cout << num << " no es un numero primo." << endl;
    }

    return 0;
}
