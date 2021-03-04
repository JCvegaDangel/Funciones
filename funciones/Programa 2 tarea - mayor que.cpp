//Vega Del angel Juan Carlos - 2AV6
//Ejercicio 2 Funciones - mayor que 

#include<iostream>

using namespace std;

void max(int a, int b);

int main(){
	
	int n1, n2;
	cout << ("Introduce el valor del primer valor: ") << endl; 
	cin >> n1;
	cout << ("Introduce el valor del segundo valor: ") << endl; 
	cin >> n2;
	
	max(n1,n2);
	return 0;
	
}

void max(int a, int b)
{
	
	if (a > b){
		cout << a << " es mayor" << endl;
	}
	else if(a<b){
		cout << b << " es mayor" << endl;
	}
	else 
	cout << "Los numeros son iguales" << endl;

}
