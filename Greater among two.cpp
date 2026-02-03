#include<iostream>
using namespace std;

int main(){
	int num1, num2 ;
	
	cout<<"Enter two numbers" <<endl;
	cin>>num1>>num2 ;
	
	cout<<"First number is " <<num1 <<" Second number is " <<num2 <<endl ;
	
	if(num1 > num2){
		cout<<"First Number is greater " <<endl;
	}
	else{
		cout<<"Second Number is Greater " <<endl ;
	}
}
