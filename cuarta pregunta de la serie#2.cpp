/*4. Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario
utilizando la función sqrt() de la biblioteca cmath */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numero;
    
    
    cout << "ingrese el numero para realizar la raiz cuadrada: ";
    cin >> numero;


    double raiz = sqrt(numero);

    
    cout << "La raiz cuadrada de:" <<numero<<" es: "<<raiz<<endl;

    return 0;
}
