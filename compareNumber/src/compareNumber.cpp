//Ingresar dos valores numéricos, se pide informar cual es el mayor y cual es el menor.
#include <iostream>
using namespace std;

int compareNumbers(int a, int b) {
	if (a > b) {
		cout << "Major number : " << a << endl;
		cout << "Minor number: " << b << endl;
	} else {
		if (a == b)
			cout << "these numbers are equals" << endl;
		else {
			cout << "Major number : " << b << endl;
			cout << "Minor number : " << a << endl;
		}

	}
	return 0;
}

int main() {
	cout
			<< "This program compares two numbers and determine which is major and minor."
			<< endl;
	int inputA, inputB;
	cin >> inputA >> inputB;
	int compare = compareNumbers(inputA, inputB);
	cout << compare << endl;
	return 0;
}
