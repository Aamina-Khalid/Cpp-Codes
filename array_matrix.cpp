#include<iostream>
#include<iomanip>
using namespace std ;

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
}
