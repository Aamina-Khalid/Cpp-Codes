#include<iostream>
using namespace std;

int main(){
	int i , j ;
	char ch = 'A' ;
	
	for( i = 0 ; i < 5 ; i++){
		for( j = i+1 ; j > 0 ; j--){
		cout<<j ;
	}
		cout<<endl;
	}
	
	i = 0 ;
	while( i < 5 ){
		j = i + 1;
		while( j > 0){
			cout<<j <<" ";
			j-- ;
		}
		cout<<endl;
		i++ ;
	}
}
