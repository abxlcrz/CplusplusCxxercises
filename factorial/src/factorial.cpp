#include <iostream>
using namespace std;

int main() {
	double input = 0;
	cout
			<< "this program calculates the factorial of a positive number, please add a number."
			<< endl;
	cin >> input;
	cout << "The number added is : " << input << endl;
	if (input == 0) {
		cout << "the factorial of " << input;
		cout << " is 1" << endl;
	} else {
		for (int i = input - 1; i != 1 - 1; i--) {
			input = input * i;
		}

		cout << "the factorial of  the number added is:" << input << endl;
	}
	return 0;
}
