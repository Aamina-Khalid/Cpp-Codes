#include<iostream>
using namespace std ;

int main(){
	int rollNum[5] = { 1 , 2 , 3 , 4 , 5 } ;
	char grade[5] = { 'A' , 'B' , 'C' , 'D' , 'E'} ;
	bool value = false ;
	int rollNumber ;
	
	cout<<"Enter roll number of a student you want to display grades of : " ;
	cin>>rollNumber ;
	
	int i = 0 ;
	while(i<5) {
		if(rollNum[i] == rollNumber ){
			cout<<"The grade for Roll Number "<<i<<" is : " <<grade[i] ;
			value = true ;
		}
		i++ ;
	}
	if(!value){
		cout<<"Invalid grade " ;
	}
	return 0 ;
}
