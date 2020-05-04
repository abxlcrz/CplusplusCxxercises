/*8. Ingresar un valor n, luego calcular la sumatoria de los números naturales hasta n
incluido y emitir su resultado.*/
#include <iostream>
using namespace std;
int main()
{
	cout<<"add a number"<<endl;
	double n,acum=0;
	cin>>n;
	for (double i = 1; i <= n; i++)
	{
		acum=acum+i;
	}
	cout<<"the result is :"<<acum;
}