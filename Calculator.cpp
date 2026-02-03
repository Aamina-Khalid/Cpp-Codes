#include<iostream>
using namespace std ;

int main() {
	
	int num1 , num2 , result ;
	char op ;
	
	cout<<"Enter the numbers to be evaluated : " <<endl ;
	cin>>num1>>num2 ;
	
	cout<<"Enter the operator you want to perform on operand : " ;
	cin>>op ;
	
	switch(op){
	  case '+' : 
        result = num1 + num2 ; 
        cout<<num1<< "+" <<num2 << "=" <<result ; 
        break; 
      
      case '-' : 
        result = num1 - num2 ; 
        cout<<num1<< "-" <<num2 << "=" <<result ; 
        break ; 
      
      case '*' : 
        result = num1 * num2 ; 
        cout<<num1<< "*" <<num2 << "=" <<result ; 
        break ; 
      
      case '/' : 
        result = num1 / num2 ; 
        cout<<num1<< "/" <<num2 << "=" <<result ; 
        break; 
      
      case '%' :
      	result = num1 % num2 ;
      	cout<<num1 << "%" << num2 << " = " <<result ;
      	break ;
      	
    default:
    	cout<<"You entered an invalid operator " ;
	}
}
