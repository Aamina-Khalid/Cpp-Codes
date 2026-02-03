#include<iostream>
using namespace std;

int order(int arr[] , int n){
	for( int i = 0 ; i < n - 1 ; i++){
		if(arr[i] > arr[i + 1]){
		return false ;
		}
	}
	return true ;
}

int main(){
	int n = 7 ;
	int array[n] = { 1 , 2 , 3  , 4 , 5 , 6 , 7} ;
	
	if(order(array , n)){
		cout<<"The array is in ascending order " ;
	}
	else
	cout<<"The array is not in ascending order" ;
	return 0 ;
}


