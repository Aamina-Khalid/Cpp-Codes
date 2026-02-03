#include<iostream>
using namespace std ;

int main(){
	int num ;
	
	cout<<"Enter a number : " ;
	cin>>num ;
	
	if(num % 5 == 0){
		cout<<"The number is exactly divisible by 5 " ;
	}
	else{
		cout<<"The number is not divisibe by 5 " ;
	}
	return 0 ;
}
