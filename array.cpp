#include<iostream>
using namespace std;

int main(){
	int array[6] = { 12 , 12 , 12 , 12 , 12 , 12} ;
	float arr[5] = { 0.5 , 0.5 , 0.5 , 0.5 , 0.5 } ;
	char arrayy[4] = { 'a' , 'a' , 'a' , 'a'} ;
	
	cout<<"Integer type array is : " ;
	int i = 0 ;
	while(i<6){
		cout<<array[i] <<" " ;
		i++ ;
	}
	cout<<endl ;
	
	cout<<"Float type array is : " ;
	i = 0 ;
	while(i<6){
		cout<<arr[i] << " " ;
		i++ ;
	}
	cout<<endl;
	
		cout<<"Character array is : " ;
	i = 0 ;
	while(i<6){
		cout<<arrayy[i] <<" ";
		i++ ;
	}
	cout<<endl;
}
