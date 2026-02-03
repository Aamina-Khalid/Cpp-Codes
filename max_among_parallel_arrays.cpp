#include<iostream>
#include<string>
using namespace std ;

int main(){
	string names[5] = { "Laptop" , "Mobile" , "Watch" , "EarBuds" , "HeadPhones" } ;
	int price[5] = { 200000 , 100000 , 50000 , 25000 , 30000} ;
	int max , i ;
	
	max = 0 ;
	i = 0 ;
	while(i < 5) {
		if(price[i] > price[max]){
			i == max ;
		}
		i++ ;
	}
	cout<<"The product with the highest price is : " <<names[max] <<endl ;
	cout<<"And the price for "<<names[max] <<" is : "<<price[max] ;
	
	return 0 ;
}
