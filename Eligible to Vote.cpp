#include<iostream>
using namespace std;

int main(){
	int age ;
	
	cout<<"Enter your age : " ;
	cin>>age ;
	
	if(age >= 18){
		cout<<"You are eligible to vote" ;
	}
	else{
		cout<<"You must be 18 year or older to be eligible to vote" ;
	}
	return 0;
}
