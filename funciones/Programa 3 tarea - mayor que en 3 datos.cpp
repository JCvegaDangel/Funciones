//Vega Del angel Juan Carlos - 2AV6
//Ejercicio 3 Funciones - mayor que en 3 numeros 

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
	
	int max1 = max(n1, n2);
	int max2 = max(max1, n3);
	
	cout << "El numero mayor es: " << max2 << endl;
	return 0;
}

int max(int a, int b){
	int c;
	if (a>b) {c = a; }
	else { c = b; }
	
	return c;
	
}
