#include<iostream>
using namespace std;

int main(){
	
	int i , j , k , n = 4 , space = n - 1 ;
	char ch = 'A' ;
	
	for( i = 0 ; i < n ; i++){
		for( j = 0 ; j < space  ; j++){
			cout<<" " ;
		}
		for ( k = 0 ; k <= 2 * i ; k++){
	 	cout<<ch ;
	 }
	 ch = ch + 1 ;
	 cout<<endl;
	 space-- ;
	}
	return 0;
}
