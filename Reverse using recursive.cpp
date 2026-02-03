#include<iostream>
using namespace std;

void seperator(int a, int b);

int main(){
	int x , y = 10 ;
	cout<<"Enter the number you want to reverse : " ;
	cin>>x;
	
	cout<<"The reverse value is : " ;
	seperator( x , y ) ;
}

void seperator(int a, int b){
	if(a>0){
		cout<<a%b;
		seperator(a/b,b) ;
	}
}
