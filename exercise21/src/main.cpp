#include <iostream>
using namespace std;
bool isDivisible(int x, int y){
	bool res=true;
	return (x%y==0)?res:res=false;
}

int main(){
	int inputA,inputB;
	cout<<"add two values: ";
	cin>>inputA>>inputB;
	cout<<"The value "<<inputA<<" is divisible by "<<inputB<<"?  "<<boolalpha<<isDivisible(inputA,inputB);
}