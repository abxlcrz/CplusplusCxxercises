#include <iostream>
using namespace std;

int sgn(int x){
	return (x<0)?-1:(x==0)?0:1;
}

int main(){
	int inputA;
	cout<<"add a number: ";
	cin>>inputA;
	cout<<"the sign(x) of :"<<inputA<<" is :"<<sgn(inputA);
}