//2. Dados dos valores a y b, enteros y distintos, se pide emitir un cartel apropiado que
//informe cual es el mayor entre ellos.

#include <iostream>
using namespace std;
int getMax(int a, int b){
	return (a>b)?a:b;
}


int main()
{	
	int a,b,max,min;
	cout<<"Ingrese a y b"<<endl;
	cin>>a>>b;
	if(a>b) cout<<"a es mayor: "<<a<<endl;
		else if(a==b)cout<<"a y b son iguales"<<endl;
				else cout<<"b es mayor: "<<b<<endl;

	return (a>b)?a:b;
}