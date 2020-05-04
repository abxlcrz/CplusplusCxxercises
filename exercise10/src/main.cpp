/*Hallar el número irracional e, ingresando previamente un valor n, que indica la cantidad
de términos a calcular, con n>=0. */

#include <iostream>
using namespace std;


int main()
{
	int n;
	float euler=1;
	cout<<"Calcule el valor del  nro  euler, por favor ingrese un numero :";
	cin>>n;
	for(int i=1;i<=n;i++){
		float factorial=1;
			for(int j=i;j>=1;j--){
				factorial=factorial*j;
			}

		euler=euler+(1/factorial);
	}
	cout<<"el numero euler es aprox:"<<euler<<endl;
}