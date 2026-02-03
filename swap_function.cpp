#include<iostream>
using namespace std;

int swap(int &a , int &b){
	int temp;
	temp = a ;
	a = b ;
	b = temp ;
}

int main(){
	int x , y ;
	cout<<"Enter first number : " ;
	cin>>x ;
	cout<<"Enter second number : " ;
	cin>>y ;
	swap(x , y) ;
	cout<<"The two numbers have been swapped " <<endl ;
	cout<<"The first number is now "<<x <<endl;
	cout<<"The second number is now "<<y ; 
}
