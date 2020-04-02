#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int charCount (string input, char c){
	int count=0,length=0;
    char abc='\0';
    size_t i;
    cout<< input<<endl;
    cout<< c<<endl;
	for(i=0;input[i]!=abc;i++){

		cout<<"the char is: "<<input[i]<<endl;
		if(input[i]==c) count++;

	}

	cout<<"The length of the string is " <<i<<endl;
	return count;

 }


int main() {
	cout<<"Please add a string to evaluate."<< endl;
	string input="";
	getline(cin, input);
	cout<<"Now add a char to count in the string previously added."<< endl;
	char charIn;
	cin>>charIn;
	int result= charCount(input,charIn);
	cout << "This string contains " <<result;
	cout<<" times the "<<charIn;
	cout<<" character"<<endl;
	return 0;
}


