#include<iostream>
#include<iomanip>
using namespace std;

void maxNum( int matrix[3][3] ){
	int i = 0 , maximum = matrix[3][3] ;
	while( i < 3){
		int j = 0 ;
		while(j < 3){
			if(matrix[i][j] > maximum){
				maximum = matrix[i][j];
			}
			j++ ;
		}
		i++ ;
	}
	cout<<"The maximum element among 2D array is : "<<maximum ;
}

int main(){
	int matrix[3][3] ;
		int i = 0 ;
	while(i < 3){
		int j = 0 ;
		while(j < 3){
			cout<<"Enter element ["<<i<<"]"<<"[" <<j <<"] : " ;
			cin>>matrix[i][j] ;
			j++ ;
		}
		i++ ;
	}
	
	cout<<"The matrix is as following " <<endl ;
	i = 0 ; 
	while(i < 3){
		int j = 0 ;
		while(j < 3){
			cout<<setw(6) << matrix[i][j] <<" " ;
			j++ ;
		}
		i++ ;
		cout<<endl ;
	}
    maxNum(matrix) ;
    return 0 ;
}


