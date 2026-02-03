#include<iostream>
using namespace std ;

int main(){
	int num1 , num2, i , result ;
	
	cout<<"Enter the first number : " ;
	cin>>num1 ;
	
	cout<<"Enter the second number : " ;
	cin>>num2 ;
	
	i = 1 ;
	while( i < num1 && num2 ){
		if(num1 > 0 && num2 > 0){
		result = num1 % num2 ;
	}
	i++ ;
	}
	
    
    cout<<"GCD of "<<num1 <<" and " <<num2 <<" is : " <<result ;



}
