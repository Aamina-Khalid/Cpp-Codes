#include<iostream>
using namespace std;

int main(){
	int i , j ;
	
	for ( i = 0 ; i < 4 ; i++){
		for( j = 0 ; j <= i ; j++){
			cout<<i+1 ;
		}
		cout<<endl;
	}
	
	i = 0 ;
	while( i < 4){
		j = 0 ;
		while( j <=i ){
			cout<<i+1;
			j++ ;
		}
		cout<<endl;
		i++ ;
	}
	
	i = 0 ;
	do{
		j = 0 ;
		do{
			cout<<i+1;
			j++ ;
		}while( j <= i) ;
		cout<<endl;
		i++ ;
	} while( i < 4) ;
	
	char ch = 'A';
	for( i = 0 ; i < 4 ; i++){
		for( j = 0 ; j <= i ; j++){
			cout<<ch ;
		}
		cout<<endl ;
		ch = ch+ 1;
	}
}
