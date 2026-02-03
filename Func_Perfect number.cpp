#include<iostream>
using namespace std;

bool isPerfect(int num);  

int main(){
    int number , i , j;
    
    cout << "Enter the value of N: ";
    cin >> number;
    
    cout << "Perfect numbers between 1 and " << number << " are: "<<endl;
    for( i = 1; i <= number; i++){
        if(isPerfect(i)) {  
            cout << "Divisor of " <<i <<" are :" ;
			for( j = 1 ; j <= i / 2 ; j++ ) {
				if( i % j == 0 ) cout<< j <<" " ;
			} 
				cout<<endl ;
        }
    }
    return 0;
}

bool isPerfect(int num){  
    int sum = 0;
    
    for(int i = 1; i <= num/2; i++){  
        if(num % i == 0){
            sum += i;  
        }
    }
    return sum == num; 
}
