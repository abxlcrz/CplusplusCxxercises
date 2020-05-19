#include <iostream>
using namespace std;
int main(){
	int listLength,inputNum,x,position;
	bool isOntheList=false;

	do{
		cout<<"please add the list's length (positive integer) : \n";
		cin>>listLength;
	}
	while(listLength<0);
	cout<<"add a number to search in the list : ";
	cin>>x;
	for (int i = 1; i <=listLength; i++){
		cout<<"add a number to the list : ";
		cin>>inputNum;
		if(inputNum==x){
			isOntheList=true;
			position=i;
		}
	}
	if(isOntheList)cout<<"the number: "<<x<<" its on the list at the position "<<position;
		else  cout<<"the number: "<<x<<" is unlisted ";
	return 0;
}