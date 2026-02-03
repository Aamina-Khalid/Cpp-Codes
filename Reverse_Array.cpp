#include<iostream>
using namespace std;

int main(){
	int n = 8 , i ;
	int reverseArray[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 } ;
	
	cout<<"The current array is : " ;
	cout<<" { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 } " <<endl ;
	for( i = 0 ; i < n / 2 ; i++ ){
		int tempVar = reverseArray[i] ;
        reverseArray[i] = reverseArray[n - 1 - i];
        reverseArray[n - 1 - i] = tempVar;
	}
	
	cout<<"The reverse array is : {" ;
	for( i = 0 ; i < n ; i++){
		cout<<reverseArray[i] ;
		if(i < n - 1 ){
			cout<<" , " ;
		}
	}
	cout<<"}" ;
	
}
