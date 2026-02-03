#include<iostream>
using namespace std;

int main(){
	int i , evenArray[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 } ;
	
	cout<<"Even number in this array are : " ;
	for( i = 0 ; i <= 10 ; i++){
		if( evenArray[i] % 2 == 0 ){
			cout<<evenArray[i] <<" ";
		}
	}

	return 0 ;
}




