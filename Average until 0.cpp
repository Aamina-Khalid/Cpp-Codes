#include<iostream>
using namespace std; 

int main(){
	int num , sum = 0 , count = 0 ;
	
	cout<<"Enter numbers (Enter 0 to stop) : " <<endl ;
	
	while( cin>>num && num != 0){
	 sum = sum+num ;
	 count++ ;
	}
	
	if( count > 0){
	double average = (double)sum / count ;
	cout<<"The average of numbers you entered is : " <<average ;
		}
}
6
