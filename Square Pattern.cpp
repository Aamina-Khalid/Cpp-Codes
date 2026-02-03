#include<iostream>
using namespace std;

int main(){
	
	int i , j ;
	
		// For Loop
	
	for( i = 1 ; i <= 4 ; i++){
		for( j = 1 ; j <= 4 ; j++){
			cout<<j ;
		}
		cout<<endl;
	}
	
	 
	// While Loop
	i = 1 ;
	while( i <= 4){
		j = 1 ;
		while( j <= 4){
			cout<<j ;
			j++ ;
		}
		cout<<endl ;
		i++ ;
	}

	
	// Do while Loop
	 i = 1 ;
	 do{
	 	j = 1 ;
	      do{
	      	cout<<j ;
	      	j++ ;
		  }while ( j <= 4);
		  cout<<endl ;
		  i++ ;
	 }while( i <= 4) ;
	return 0 ;
}
