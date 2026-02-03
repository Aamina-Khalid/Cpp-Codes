#include<iostream>
using namespace std;

int main(){
	int num , reverseNum = 0 , remainder ;
	
	cout<<"Enter a number you want to reverse : " ;
	cin>>num ;
	
	int orignal = num ;
	
	while( num > 0){
		remainder = num % 10 ;
		reverseNum = reverseNum * 10 + remainder ;
		num =  num /10 ;
	}
	
	cout<<"Orignal number was : " <<orignal <<endl ;
	cout<<"New number is : "<<reverseNum;
}

