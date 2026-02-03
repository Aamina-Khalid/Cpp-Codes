#include<iostream>
using namespace std;

int main(){
	
	int array[10] , i = 0 ;
	
	cout<<"Enter values to display in the array : " <<endl ;
	while( i < 10 ){
		cin>>array[i];
		i++ ;
	}
	
	int max = array[0] , min = array[0] ;
	for( i = 0 ; i < 10 ; i++){
		if( array[i] > max){
			
			max = array[i] ;
		}
			if( min > array[i] ){
		    min = array[i] ;
		}
	}
	cout<<"Largest element in array is : " <<max <<endl;
	cout<<"Smallest element in array is : " <<min ;
}



