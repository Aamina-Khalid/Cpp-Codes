#include<iostream>
#include<string>
using namespace std;

int main(){
	string password ;
	
	cout<<"Enter the password : " ;
	cin>>password;
	
	if(password == "abc@123" ){
		cout<<"\nAccess Granted" ;
	}
	else{
		cout<<"\nAccess Denied " ;
	}
	return 0;
}
