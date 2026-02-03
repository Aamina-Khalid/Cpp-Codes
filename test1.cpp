#include<iostream>
using namespace std ;

int series(int num){
	int i , sum = 0 , value ;
	for( i = 1 ; i <= num ; i++){
	value = i ;
	sum = sum + i + value ;
	 }
	
	return sum ;
}

int main(){
	
	int number ;
	cout<<"Enter the value of N : " ;
	cin>>number ;
	
	cout<<"F(" << number << ") = " <<series(number) ;
	return 0 ;
}
