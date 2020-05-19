#include <iostream>
#include <string>
using namespace std;
#define INT_MAX 2147483647

int main(){
	int code;
	int carNumberWinner=0,truckNumberWinner=0,motoNumberWinner=0;
	int minValueCar=INT_MAX,minValueTruck=INT_MAX,minValueMoto=INT_MAX;
	float timeCar,timeTruck,timeMoto;
	int centinelCar=0,centinelTruck=0,centinelMoto=0;
	string driverNameCar,driverSurnameCar,coDriverNameCar,coDriverSurnameCar,scuderiaCar;
	string driverNameTruck,driverSurnameTruck,coDriverNameTruck,coDriverSurnameTruck,scuderiaTruck;
	string driverNameMoto,driverSurnameMoto,coDriverNameMoto,coDriverSurnameMoto,scuderiaMoto;

	
	do{
		cout<<"please add the code for the category:";
		cin>>code;
		switch (code){	
			case 0: break;

			case 1:{ 
				int carNumber;
				string driverName,driverSurname,coDriverName,coDriverSurname,scuderia;
				cout<<"cars category"<<endl;
				cout<<"please add the racer name: ";
					cin>>driverName;
				cout<<"please add the surname: ";
					cin>>driverSurname;
				cout<<"please add the codriver name: ";
					cin>>coDriverName;
				cout<<"please add the codriver surname: ";
					cin>>coDriverSurname;
				cout<<"please add the car number: ";
					cin>>carNumber;
				cout<<"please add the scuderia: ";
					cin>>scuderia;
				cout<<"please add the time of the team: ";
					cin>>timeCar;
					if(timeCar<minValueCar){
						minValueCar=timeCar;
						driverNameCar=driverName;
						driverSurnameCar=driverSurname;
						coDriverNameCar=coDriverName;
						coDriverSurnameCar=coDriverSurname;
						carNumberWinner=carNumber;
						scuderiaCar=scuderia;
						centinelCar++;
					}
				break;
			}
			case 2: {
				int truckNumber;
				string driverName,driverSurname,coDriverName,coDriverSurname,scuderia;
				cout<<"cars category"<<endl;
				cout<<"please add the racer name: ";
					cin>>driverName;
				cout<<"please add the surname: ";
					cin>>driverSurname;
				cout<<"please add the codriver name: ";
					cin>>coDriverName;
				cout<<"please add the codriver surname: ";
					cin>>coDriverSurname;
				cout<<"please add the car number: ";
					cin>>truckNumber;
				cout<<"please add the scuderia: ";
					cin>>scuderia;
				cout<<"please add the time of the team: ";
					cin>>timeTruck;
					if(timeTruck<minValueTruck){
						minValueTruck=timeTruck;
						driverNameTruck=driverName;
						driverSurnameTruck=driverSurname;
						coDriverNameTruck=coDriverName;
						coDriverSurnameTruck=coDriverSurname;
						carNumberWinner=truckNumber;
						scuderiaTruck=scuderia;
						centinelTruck++;
					}
				break;
			}
			case 3: {
				int MotoNumber;
				string driverName,driverSurname,coDriverName,coDriverSurname,scuderia;
				cout<<"cars category"<<endl;
				cout<<"please add the racer name: ";
					cin>>driverName;
				cout<<"please add the surname: ";
					cin>>driverSurname;
				cout<<"please add the codriver name: ";
					cin>>coDriverName;
				cout<<"please add the codriver surname: ";
					cin>>coDriverSurname;
				cout<<"please add the car number: ";
					cin>>MotoNumber;
				cout<<"please add the scuderia: ";
					cin>>scuderia;
				cout<<"please add the time of the team: ";
					cin>>timeMoto;
					if(timeMoto<minValueMoto){
						minValueMoto=timeMoto;
						driverNameMoto=driverName;
						driverSurnameMoto=driverSurname;
						coDriverNameMoto=coDriverName;
						coDriverSurnameMoto=coDriverSurname;
						carNumberWinner=MotoNumber;
						scuderiaMoto=scuderia;
						centinelMoto++;
					}
				break;
			}
			default: cout<<"Incorrect code"<<endl;
		}
		
	}
	while(code!=0);
	if(centinelCar>0){
		cout<<"CAR CATEGORY \nThe winner is the scuderia: "<<scuderiaCar<<" with the time: "<<minValueCar<<" car code: "<<carNumberWinner<<" driver name: "<<driverNameCar<<" driver surname: "<<driverSurnameCar;
		cout<<" codriver name: "<<coDriverNameCar<<" driver surname: "<<coDriverSurnameCar<<endl;
	}
	if(centinelTruck>0){
		cout<<" TRUCK CATEGORY \nThe winner is the scuderia: "<<scuderiaTruck<<" with the time: "<<minValueTruck<<" car code: "<<truckNumberWinner<<" driver name: "<<driverNameTruck<<" driver surname: "<<driverSurnameTruck;
		cout<<" codriver name: "<<coDriverNameTruck<<" driver surname: "<<coDriverSurnameTruck<<endl;
	}
	if(centinelMoto>0){
		cout<<" MOTO CATEGORY \nThe winner is the scuderia: "<<scuderiaMoto<<" with the time: "<<minValueMoto<<" car code: "<<motoNumberWinner<<" driver name: "<<driverNameMoto<<" driver surname: "<<driverSurnameMoto;
		cout<<" codriver name: "<<coDriverNameMoto<<" driver surname: "<<coDriverSurnameMoto<<endl;
	}
	cout<<"end of execution"<<endl;
	return 0;
}