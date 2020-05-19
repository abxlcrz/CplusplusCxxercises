#include <iostream>

using namespace std;
	int fibonacci(int inputFibonacci){
		
		int i=0,serieFib=0,current=1,before=0,acum=0;
		if(inputFibonacci==0)cout<<"the  fibonacci series is : 0"<<endl;
		else{
			cout<<"the  fibonacci series is : 0"<<endl;
			while(i!=inputFibonacci && acum<inputFibonacci){
				serieFib=current;
				current=current+before;
				before=serieFib;
				cout<<"the  fibonacci series is : "<<current<<endl;
				acum=acum+current;
				//if(acum>inputFibonacci) break;
				cout<<"the sum is: "<<acum<<endl;			
				i++;
				}
			}
		return 0;
	}

 	int main (){
		int inputA;
		cout<<"please add a number: ";
		cin>>inputA;
		cout<<fibonacci(inputA);
		return 0;
 };