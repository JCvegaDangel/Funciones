//Vega Del angel Juan Carlos - 2AV6
//Ejercicio 5 Funciones - factoriales

#include<iostream>

using namespace std;

int factorial(int a);

int main(){
	
	int n1;
	cout << "Introduzca el valor del numero: " << endl;
	cin >> n1;
	
	int fac = factorial(n1);
	
	cout << "El " << n1 << "! es " << fac << endl;  
}

int factorial(int a){
	int i;
	int resultado =1;
	for (i=1; i<=a; i++){
		resultado *=i;
		
		return resultado;
	}
}
	
	
