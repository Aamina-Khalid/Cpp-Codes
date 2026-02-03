#include<iostream>
using namespace std;

int main(){
	int i , j , num ;
	
	cout<<"Enter a value to display tables for : " ;
	cin>>num;
	
	i = num ;
	do{
		j = 1;
		do{
			cout<<i<<" x "<<j<<" = " <<i*j <<endl;
			j++ ;
		}while( j <= 10);
		i++ ;
		}while( i == num );
}
