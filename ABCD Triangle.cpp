#include<iostream>
using namespace std;

int main(){
	
	int i , j ;
	
	for( i = 0 ; i < 4 ; i++){
		char ch = 'A' ;
		for( j = 0 ; j <= i ; j++){
			cout<<ch ;
			ch++ ;
		}
		cout<<endl;
	}
	return 0;
}
