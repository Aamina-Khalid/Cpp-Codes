#include<iostream>
using namespace std ;

int main(){
 int i , j , k , n = 4 , space = n- 1 , num = 1 ;
 
 for(i = 0 ; i < n ; i++){
 	for(j = space ; j > 0 ; j--){
 		cout<<" " ; 
	 }
	 for( k = 0 ; k <= i ; k++){
	 	cout<<num ;
	 	num++ ;
	 }
	 cout<<endl;
	 space-- ;
 }
}
