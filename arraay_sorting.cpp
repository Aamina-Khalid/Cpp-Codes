#include<iostream>
using namespace std;

int main(){
	int array[15] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15} , value;
	bool isFound = false ;
	
	cout<<"Enter a value and let's check if it is in an array or not : " ;
	cin>>value ;
	
	cout<<"\n " <<value << " has been found at index : " ;
	int i = 0 ;
	while(i<15){
		if( array[i] == value){
			cout<< i ;
			isFound = true ;
		}
		i++ ;
	}
	if(!isFound){
		cout<<"\nThe value you enetered is not in this array" ;
	}
}

