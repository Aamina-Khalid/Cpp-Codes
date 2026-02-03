#include<iostream>
using namespace std;

int swapByValue(int a , int b){
	int temp ;
	temp = a ;
	a = b ;
	b = temp ;
}

int swapByRef(int &a , int &b){
	int temp;
	temp = a ;
	a = b ;
	b = temp ;
}

int swapByPointer(int *a , int *b){
	int temp;
	temp = *a ;
	*a = *b ;
	*b = temp ;
}
int main(){
	int x , y ;
	cout<<"Enter x and y : " <<endl ;
	cin>>x>>y ;
	swapByValue(x , y) ;
	cout<<"Swap by value gives x : " <<x <<" and gives y : " <<y <<endl ;
	swapByRef(x , y) ;
	cout<<"Swap by reference gives x : " <<x <<" and gives y : " <<y <<endl ;
	swapByPointer(&x , &y) ;
	cout<<"Swap by pointer gives x : " <<x <<" and gives y : " <<y <<endl ;
	return 0 ;
}


