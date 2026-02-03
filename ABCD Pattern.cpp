#include <iostream>
using namespace std;

int main(){
	
	int i , j ;
	
	for( i = 0 ; i < 4 ; i++){
		char ch = 'A' ;
	    for( j = 0 ; j < 4 ; j++){
	    	cout << ch << " " ;
	    	ch = ch + 1 ;
		}
		cout<<endl ;
	}
}


