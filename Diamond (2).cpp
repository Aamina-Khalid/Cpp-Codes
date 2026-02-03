#include<iostream>
using namespace std;

int main(){
	int i , j , k , n = 3 , space = n - 1 , num = 1 ;
	
	for( i =  0 ; i < n ; i++) {
		for( j = space ; j > 0 ; j--){
			cout<<" " ;
		}
		for( k = 0 ; k <= 2 * i ; k++){
			cout<<"*" ;
		}
		space-- ;
		cout<<endl ;
	}
	space = 1 ;
	for( i = n - 1; i > 0 ; i--){
		for( j = 0 ; j < space ; j++){
			cout<<" " ;
		}
		for( k = 0 ; k < (2 * i - 1) ; k++){
			cout<<"*";
		}
		cout<<endl;
		space++ ;
	}
}
