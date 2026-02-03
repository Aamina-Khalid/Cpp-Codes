#include<iostream>
using namespace std;

int main(){
	int array[5] , i = 0 ;
	
	cout<<"Enter 5 values to display in an array : " <<endl;
	
	cin>>array[0];
	cin>>array[1];
	cin>>array[2];
	cin>>array[3];
	cin>>array[4];
	
	cout<<"The elements of array are { " <<array[0] <<" , " <<array[1] <<" , " 
	<<array[2] <<" , "  <<array[3] <<" , "  <<array[4] <<" }" ;
	
//	or
	
	 
	cout<<"Enter 5 values to diplay in an array : " ;
	while( i < 5){
		cin>>array[i];
		i++ ;
	}
	
	i = 0 ;
	cout<<"The 5 values are : { " ;
		while( i < 5){
		cout<<array[i];
		if(i < 4){
			cout<<" , " ;
		}
		i++ ;
	}
	cout<<" } " ;
	
	
	return 0 ;
}
