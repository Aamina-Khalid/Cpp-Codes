#include<iostream>
using namespace std;

int largest(int &a , int &b){
	if(a>b)
	cout<<a<<" is larger than "<<b <<endl ;
	else
	cout<<b<<" is larger than "<<a<<endl ;
}
int main(){
	int x , y ;
	cout<<"Enter two number you want to check the largest among them : " <<endl ;
	cin>>x>>y ;
	largest(x , y ) ;
	return 0 ;
}
