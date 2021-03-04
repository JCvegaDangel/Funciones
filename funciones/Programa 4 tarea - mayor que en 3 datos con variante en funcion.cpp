//Vega Del angel Juan Carlos - 2AV6
//Ejercicio 4 Funciones - mayor que en 3 numeros variable en funcion

#include<iostream>

using namespace std;

int max(int a, int b);

int main(){
	
	int n1, n2, n3;
	cout << ("Introduce el valor del primer valor: ") << endl; 
	cin >> n1;
	cout << ("Introduce el valor del segundo valor: ") << endl; 
	cin >> n2;
	cout << ("Introduce el valor del tercer valor: ") << endl; 
	cin >> n3;
	
	int Max = max(max(n1, n2), n3);
	
	cout << "El numero mayor es: " << Max << endl;
	return 0;
}

int max(int a, int b){
	int c;
	if (a>b) { return a; }
	else { return b; }
	
}
