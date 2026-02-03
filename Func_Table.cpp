#include<iostream>
using namespace std ;

void separator();
void multiple(int num);
int main(){
	int num , i ;
	
	cout<<"Enter The value of N : " ;
	cin>>num;
	
	cout<<"The tables from 1 to "<<num << " are : " ;
	for( i = 1 ; i <= num ; i++){
		cout<<endl;
		multiple(i);
		cout<<endl;
		separator();
	}	
	return 0;
}
void separator(){
	int i = 1 ;
	do{
		cout<<"* " ;
		i++ ;
	}while( i <= 15 );
}
void multiple(int num){
	for ( int i = 1 ; i <= 10 ; i++){
		cout<<i*num<<" " ;
	}
}

