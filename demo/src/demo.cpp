#include <iostream>
using namespace std;

int main() {
	int a=0, b=0, acum=0,i=0;
	cout << "add two numeric values" << endl;
	cin >> a;
	cin >> b;
	while (i!=b) {
		acum=acum+a;
		i++;
	}

	cout << "product of a and b is:" << acum << endl;
	return 0;
}
