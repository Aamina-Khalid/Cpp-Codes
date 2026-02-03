#include<iostream>
using namespace std ;

int main(){
	
    int employeeID[5] = { 1 , 2 , 3 , 4 , 5 } ;
    int salary[5] = { 40000 , 50000 , 90000 , 30000 , 60000 } ;

    int i = 0 ;
    while( i < 5 ){
    	if(salary[i] < 50000){
    		salary[i] = salary[i] + (salary[i] * 0.10);
		}
		i++ ;
	}
	cout<<"The new salaries are : { " ;
	for( i = 0 ; i < 5 ; i++){
		cout<<salary[i] ;
		if( i < 4)
		cout<<" , " ;
	}
	cout<<" }" ;
}

