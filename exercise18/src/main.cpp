#include <iostream>
using namespace std;

int getMcd(int x, int y){
	int mcd;
	if(x<y){
		int aux=0;
		aux=x;
		x=y;
		y=aux;
	}
	while(y!=0){
		int div= x/y;
		int res=x%y;
		mcd=y;
		x=y;
		y=res;

	}

	return mcd;
}

int main()
{	
	int inputA,inputB;
	cout<<"addd two values :";
	cin>>inputA>>inputB;
	cout<<"the mcd of :"<<inputA<<" and :"<<inputB<<" is :"<<getMcd(inputA,inputB);
}