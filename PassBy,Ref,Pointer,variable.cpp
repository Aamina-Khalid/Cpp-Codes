#include<iostream>
using namespace std;

int addFunc(int a){
	a = a + 10 ;
}

int addfunc(int &a){
	a = a + 10 ;
}

int add(int *a){
	*a = *a + 10 ; 
}
int main(){
	int x = 10 ;
	addFunc(x) ;
	cout<<"Pass by value gives : " <<x <<endl ;
	addfunc(x) ;
	cout<<"Pass by reference gives : " <<x <<endl ;
	add(&x) ;
	cout<<"Pass by pointer gives : " <<x <<endl ;
	return 0 ;
}


