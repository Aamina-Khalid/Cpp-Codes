#include<iostream>
using namespace std;

int main(){
	int temperature ;
	
	cout<<"Enter the temprature : " ;
	cin>>temperature ;
	
	if( temperature < 0 ){
		cout<<"\nFreezing Cold" ;
	}
	else if(temperature > 0 && temperature <= 15 ){
		cout<<"\nTemperature is Cold" ;
	}
	else if( temperature > 16 && temperature <= 25 ){
		cout<<"\nTemperature is Moderate" ;
	}
	else if( temperature > 26 && temperature <= 35 ){
		cout<<"\nTemperature is Hot" ;
	}
	else{
		cout<<"Temperature is very hot" ;
	}
	return 0;
}
