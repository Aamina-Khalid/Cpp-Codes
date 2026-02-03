#include<iostream>
using namespace std;

int main(){
	int array[20] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 
	13 , 14 , 15 , 16 , 17 , 18 , 19 , 20} , sum = 0 , count = 0 , i , max = array[0] , min = array[0];
	
	for( i = 0 ; i < 20 ; i++){
		sum = sum + array[i] ;
		count++ ;
	}
	cout<<"Sum is : " <<sum <<endl;
	
	double average = sum / count ;
	cout<<"Avergae is : " <<average <<endl ;
	
	for(i = 0 ; i < 20 ; i++){
		 if(array[i] > max )
		 max = array[i] ;
	}
		for(i = 0 ; i < 20 ; i++){
		 if(array[i] < min )
		 min = array[i] ;
	}
	cout<<"Maximum element of this array is : "<<max<<endl ;
	cout<<"Minimum element of this array is : "<<min<<endl ;
}
