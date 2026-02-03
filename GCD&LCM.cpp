#include<iostream>
using namespace std;

int main(){
	int num1, num2 , GCD ;
	cout<<"Enter first number : " ;
	cin>>num1 ;
	cout<<"Enter second number : " ;
	cin>>num2 ;
	
	int i = 1;
	while( i <= num1 && i <= num2){
		if(num1%i == 0 && num2%i == 0 ){
			GCD = i ;
		}
		i++ ;
	}
	int LCM = num1*num2 / GCD ;
	cout<<"The GCD of the two numbers you entered is : " <<GCD <<endl;
	cout<<"The LCM of the two numbers you entered is : " <<LCM ;
}
