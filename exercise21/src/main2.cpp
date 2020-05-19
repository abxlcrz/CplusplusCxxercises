#include <iostream>
using namespace std;

bool isDivisible(int x, int y){
	int k=0;
	for (size_t i = 0; i <=x; i++){
		k=y*i;
		if(k==x){
			return true;
			break;
		}
	}
	return false;
}

int main(){
	int a,b;
	cout<<"add two values:";
	cin>>a>>b;
	cout<<"the result is: "<<boolalpha<<isDivisible(a,b);

	
}