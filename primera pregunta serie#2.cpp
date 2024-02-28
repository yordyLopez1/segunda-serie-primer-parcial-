//1. Escribe un programa en C++ que declare dos variables enteras, a y b, y calcule la suma, resta,

#include<iostream>

using namespace std;

int main(){
	int a,b, suma=0,resta=0;
	
	cout<<"Ingrese el primer valor: ";cin>>a;
	cout<<"Ingrese el segundo valor: ";cin>>b;
	
	suma= a+b;
	resta= a-b;
	

	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	
	return 0;
}