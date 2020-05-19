#include <iostream>
#define INT_MIN -2147483647
using namespace std;


int main(){
	int number,listNum;
	do{
		cout<<"please add a positive number:";
		cin>>number;
	}
	while(number<=0);
	int maxValue=INT_MIN,position=0;
	for (size_t i=1; i <= number; i++)
	{
		cout<<"please add a number: ";
		cin>>listNum;
		if(listNum>maxValue){
			maxValue=listNum;
			position=i;
		}
	}
	cout<<"the max number is: "<<maxValue<<" and his position is: "<<position<<endl;
	
}