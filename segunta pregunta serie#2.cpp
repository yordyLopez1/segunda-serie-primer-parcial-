/*Escribe un programa en C++ que solicite al usuario un número entero positivo n y muestre la suma de
todos los números enteros desde 1 hasta n*/
#include <iostream>

using namespace std;

int main() {
    int n;
    int suma = 0;
   cout << "Ingrese un numero entero positivo: ";
    std::cin >> n;

   
    if (n <= 0) {
        cout << "El numero ingresado no es positivo." << endl;
        return 1; 
    }

    
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }

    cout << "La suma de todos los nmeros enteros desde 1 hasta " << n << " es: " <<suma<<endl;


 
    return 0;
}
