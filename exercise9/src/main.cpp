/*8. Ingresar un valor n, luego calcular la sumatoria de los números naturales hasta n
incluido y emitir su resultado.
9. Encontrar otra solución al punto anterior para optimizar el tiempo de proceso. */
#include <iostream>
using namespace std;
int main()
{
	cout<<"optimized version of exercise 8,please add a number:"<<endl;
	double product,n;
	cin>>n;
	product=(n*(n+1))/2;
	cout<<"the result is :"<<product;
}