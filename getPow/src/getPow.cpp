#include <iostream>
using namespace std;

int getPow(int a, int b)
{
	int k = a, i = b;
	if (a == 0 && b == 0)
	{
		cout << "math error" << endl;
		
	}
	else if (a != 0 && b == 0)
	{
		
		return 1;
	}
	else if (a == 0 && b != 0)
	{
		
		return 0;
	}
	else{
		while (i != 1){
			a = a * k;
			i--;
		}
		return a;
	}
}

int main(void)
{
	int inputA, inputB;
	/* tipo_de_dato identificador/nombre = valor a asignar*/
	cout << "This program calculates the pow of x number, please add 2 numbers" << endl;
	cin >> inputA >> inputB;
	cout << "the pow of a^b is: " << getPow(inputA, inputB) << endl;
}