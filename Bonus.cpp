#include<iostream>
using namespace std;

int main(){
	int serviceYears , salary ;
	
	cout<<"Enter your years you have serviced : " ;
	cin>>serviceYears ;
	
	if(serviceYears >= 5){
		cout<<"\nEligible for bonus" ;
		 if( salary < 50000 ){
		 	cout<<"\nBonus : 10% of salary" ;
		 }
		 else{
		 	cout<<"\nBonus : 5% of salary" ;
		 }
	}
	else{
		cout<<"\nNot eligible for bonus" ;
	}
	return 0;
}
