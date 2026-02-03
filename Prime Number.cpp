#include<iostream>
using namespace std;

int main(){
	
	int i , num ;
	bool prime(true) ;
	
	cout<<"Enter a number to check whether it is prime or not : " ;
	cin>>num ;
	
	if(num <= 1){
		cout<<"The number is not a prime number " ;
		return 0;
	}
	
	//Whike loop
	
	i = 2 ;
	while( i < num ){
		if( num % i == 0){
			prime = false;
		}
		i++ ;
		}
	
	if (prime){
		cout<< num << " is a prime number " <<endl ;
	}
	else{
		cout<< num << " is not a prime number " <<endl ;
	}
	
	//For Loop
	for ( i = 2 ; i < num ; i++){
		if ( num % i == 0){
			prime = false ;
		}
	}
	if(prime){
		cout<<"The num is prime" ;
	}
	else{
		cout<<"The number is not prime" ;
	}
	
//	DO-WHILE LOOP
i = 2 ;
    do{
      if(num%i == 0){
      	prime = false ;
      	i++ ;
	  }
	}while( i >= num) ;
	
	if(prime) {
		cout<<"The number is prime " ;
	}
	else{
		cout<<"The number is not prime " ;
	}
	return 0;
	}
