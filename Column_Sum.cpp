#include<iostream>
#include<iomanip>
using namespace std ;

void sumCol( int matrix[3][3] , int colIndex){
	int i  , sum = 0 ;
	i = 0 ;
	while(i < 3){
		sum += matrix[i][colIndex] ;
		i++ ;
	}
	cout<<"\nThe sum of column Index is : " <<sum ;
}

int main(){
	int array[3][3] , i , j , column;
	
	i = 0 ;
	while( i < 3 ){
		j = 0 ;
		while( j < 3 ){
		cout<<"Enter element ["<<i<<"]"<<"[" <<j <<"] : " ;
		cin>>array[i][j] ;
		j++ ;
		}
		i++ ;
	}
	cout<<"\nYour 3 x 3 matrix of array is : " <<endl ;
	i = 0 ;
	while( i < 3){
		j = 0 ;
		while( j < 3 ){
			cout<<setw(7) <<array[i][j] <<" " ;
			j++ ;
		}
		i++ ;
		cout<<endl ;
	}
	cout<<"\nEnter the column you want to sum : " ;
	cin>>column ;
	
	if(column > 0 && column < 3){
		sumCol(array , column) ;
	}
	else
	cout<<"Invalid column " ;
	return 0 ;
}
