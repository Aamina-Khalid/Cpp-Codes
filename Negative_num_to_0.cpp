#include<iostream>
using namespace std;

int main(){
	int array[10] = { -1 , -2 , -3 , 1 , 2 , 3 , 4 , -9 , -5 , 5} ;
	 
	 int i = 0 ;
	 while( i < 10){
	 	if(array[i] < 0){
	 		array[i] = 0 ;
		 }
		 i++ ;
	 }
	 cout<<" { " ;
	 i = 0 ;
	 while( i < 10){
	 	cout<<array[i] ;
	 	if(i < 9)
	 	cout<<" , " ;
	 	i++ ; 
	 }
	 cout<<" } " ;
	 return 0 ;
}


