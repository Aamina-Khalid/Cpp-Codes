#include<iostream>
using namespace std ;

int main(){
  int matrix[3][3] = {
  { 1 , 2 , 3} ,
  { 4 , 5 , 6} ,
  { 7 , 8 , 9} 
  } ;
  	int array[3][3] = {
  { 1 , 2 , 3} ,
  { 4 , 5 , 6} ,
  { 7 , 8 , 9} 
  } ;
  bool value = true ;
  
  int i = 0 ;
  while( i < 3){
  	int j = 0 ;
  	while( j < 3){
  		if(matrix[i][j] != array[i][j]){
  			value = false ;
  			break ;
		  }
		  j++ ;
	  }
	  i++ ;
  }
  if(value){
  	cout<<"The matrices are identical " ;
  }
  else
  cout<<"The matrices mismatch " ;
}
