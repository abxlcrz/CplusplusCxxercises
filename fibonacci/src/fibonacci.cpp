#include <iostream>

using namespace std;
	int fibonacci(int inputFibonacci){
		
		int i=0,serieFib=0,current=1,before=0;
		while( i!=inputFibonacci){
			serieFib=current;
			current=current+before;
			before=serieFib;
			cout<<"the number is: "<<current<<endl;
			
			i++;
			
			
		}
		return 0;
	}

 	int main (){
		 int inputA;
		cout<<"please add a number"<<endl;
		cin>>inputA;
		cout<<fibonacci(inputA);
		return 0;
 };