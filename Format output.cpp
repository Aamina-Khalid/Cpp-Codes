#include<iostream>
#include<iomanip>
using namespace std ;

int main(){
	int num = 12.123 , value = 3245.23 , price = 7609.987 , name ;
	
	cout<<setprecision(2)<<12.123 <<endl ;
	cout << setw(6) << 42 << setw(6) << 7<<endl;
	cout << fixed << setprecision(1) << 3.14159;


// Common formatting combinations:
cout << setw(10) << value <<endl;                    // Field width
cout << fixed << setprecision(2) << price<<endl;    // 2 decimal places
cout << left << setw(15) << name;             // Left alignment
cout << showpoint << setprecision(10) << num;  // Show .000

cout<<endl ;
cout<<endl ;
cout<<endl ;
double d = 0.1;
cout<<setprecision(20)<<d ;

int x = 5 , y = 2 ;
cout<<(x < y) ;


if(x = 2)
cout<<"hi there " ;
}
