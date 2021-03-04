//Vega Del angel Juan Carlos - 2AV6
//Ejercicio 1 Funciones - suma

#include<iostream>

using namespace std;

void suma(int a, int b);
int main(){
	
	int n1, n2;
	cout << ("Introduzca el valor del primer operando: ") << endl; 
	cin >> n1;
	cout << ("Introduzca el valor del segundo operando: ") << endl; 
	cin >> n2;
	
	suma(n1,n2);
	
	return 0;
}

void suma(int a, int b)
{
	int c = a + b; 
	cout << "El resultado de " << a << " + " << b << " es: "<< c << endl;
}
