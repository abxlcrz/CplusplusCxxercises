/*17. Crear una función que recibe tres parámetros, el primero es un valor booleano, y los otros 2,
valores enteros. La función deberá retornar el primer valor entero, si el valor booleano es
verdadero, caso contrario se retorna el segundo valor entero.*/
#include <iostream>
using namespace std;

int fooFunction(bool x,int y,int z){
	return(x)?y:z;
}


int main()
{
	int inputA, inputB;
	bool state=true;
	cout<<"please add two values: ";
	cin>>inputA>>inputB;
	cout<<"set the state of the bool variable\n";
	cout<<"0= false, another value=true :";
	cin>>state;
	cout<<"the value returned is: "<<fooFunction(state,inputA,inputB);
	return 0;
}