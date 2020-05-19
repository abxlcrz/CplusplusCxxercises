#include <iostream>
using namespace std;
float getRes(int x, int y){
	return x%y;
}

int main(){
	int inputA,inputB;
	cout<<"add two values: ";
	cin>>inputA>>inputB;
	cout<<"the reminder of "<<inputA<<" and "<<inputB<<" is:"<<getRes(inputA,inputB);
}