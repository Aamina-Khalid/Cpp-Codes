#include<iostream>
using namespace std;

int square(int *p){
	*p = *p * *p ;
}

int main(){
	int a = 5 ;
	cout<<"Value is : " <<a <<endl ;
	square(&a) ;
	cout<<"Now the value is : " <<a ;
	return 0; 
}
