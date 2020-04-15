#include <iostream>

using namespace std;
	float Euler(int inputEuler){
		
		int i= inputEuler;
		float k=1, result=(1+(1/static_cast<float> (inputEuler)));
		while(i!=0){
			
			k=k*result;
			i--;
		}
		return k;
	}

 	int main (){
		 int inputA;
		cout<<"please add a number"<<endl;
		cin>>inputA;
		cout<<"the e number is: "<<Euler(inputA);
		return 0;
 };