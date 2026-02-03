#include<iostream>
using namespace std;

int main(){
	
	int num , count = 0 ;
	
	cout<<"Enter number you want to count the digits of : " ;
	cin>>num ; 
	
	while( num!= 0){
		num = num/10 ;
		count++ ;
	}
	cout<<"The number of digits in " <<num <<" are : " <<count ;
}
