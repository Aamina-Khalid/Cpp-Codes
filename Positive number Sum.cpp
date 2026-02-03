#include<iostream>
using namespace std;

int main(){
	int num , sum = 0;
	
	cout<<"Enter a number" <<endl;
	
	do{
		cin>>num;
		if(num>0)
		sum = sum + num ;
	}while(num > 0) ;
	
	cout<<"The sum of the positive numbers you entered is : " <<sum;
	
}
