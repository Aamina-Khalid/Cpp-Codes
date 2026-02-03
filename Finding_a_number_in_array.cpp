#include<iostream>
using namespace std;

int main(){
	int num , i ;
	int array[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 } ;
	bool value = false ; 
	
	cout<<"Enter the number you want to check is in array or not : " ;
	cin>>num ;
	cout<<"The number you enetered is at the index : " ;
	for( i = 0 ; i < 8 ; i++ ){
		if ( array[i] == num){
			cout<<i ;
			value = true ;
		}
	}
	if (!value){
		cout<<"The number you entered is not in array " ;
	}
}
