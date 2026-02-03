#include<iostream>
#include<iomanip>
using namespace std ;

int main(){
	int age = 21 ;
	
	cout<<"Size of int : " <<sizeof(int) <<" bytes" <<endl;
	cout<<"Size of char : " <<sizeof(char) <<" bytes" <<endl;
	cout<<"Size of float : " <<sizeof(float) <<" bytes" <<endl;
	cout<<"Size of double : " <<sizeof(double) <<" bytes" <<endl;
	cout<<"Size of long long int : " <<sizeof(long long int) <<" bytes" <<endl;
	cout<<"Size of long double : " <<sizeof(long double) <<" bytes" <<endl;
	
	cout<<"The address of variable age is : "<< &(age) <<endl ;
	
	
	

    // SIGNED integer (default)
    int signed_num = -100;           // Can be negative
    signed_num = 2000000000;         // Can be positive
    signed_num = -2000000000;        // Can be negative
    
    // UNSIGNED integer  
    unsigned int unsigned_num = 100; // Can only be positive
    unsigned_num = 4000000000;       // Large positive number
     unsigned_num = -100;          // ERROR! Compiler warning
    
    cout << "Signed: " << signed_num << endl;
    cout << "Unsigned: " << unsigned_num << endl;
    



    unsigned int x = 4294967295; // Maximum value for unsigned int
    
    cout << "Before overflow: " << x << endl;
    x = x + 1; // Overflow!
    cout << "After overflow: " << x << endl; // Becomes 0
    
    unsigned int y = 0;
    cout << "Before underflow: " << y << endl;
    y = y - 1; // Underflow!
    cout << "After underflow: " << y << endl; // Becomes 4294967295
    
    
       // SIGNED OVERFLOW
    int max_signed = 2147483647; // Maximum signed int
    int min_signed = -2147483648; // Minimum signed int
    
    cout << "Max signed: " << max_signed << endl;
    max_signed = max_signed + 1; // Overflow!
    cout << "After overflow: " << max_signed << endl; // Becomes min!
    
    cout << "Min signed: " << min_signed << endl;
    min_signed = min_signed - 1; // Underflow!
    cout << "After underflow: " << min_signed << endl; // Becomes max!
    
    
     unsigned char small = 255; // Like a tiny 0-255 circle
    
    cout << "Start: " << (int)small << endl; // 255
    small = small + 1;
    cout << "After +1: " << (int)small << endl; // 0
    
    small = 0;
    small = small - 1;
    cout << "After -1: " << (int)small << endl; // 255
    
    
    unsigned short score = 65535; // max unsigned short
score += 5;
cout << score <<endl;


unsigned int budget = 100;
int expense = 150;
budget = budget - expense;
cout << "Remaining budget: " << budget <<endl;



unsigned int items = 4000000000;
unsigned int new_items = 500000000;

// Will this cause overflow?
if (items + new_items < items) {
    cout << "Overflow detected!" <<endl;
} else {
    items = items + new_items;
}
    
    
    signed char c = 127;
c += 2;
cout << (int)c <<endl;


const int num = 10;
cout<<num;


   
    cout << "Hello\b\b\bWorld" << endl;  // HelWorld
    cout << "12345\b\bXX" << endl;       // 123XX
    cout << "C++\b\bJava" << endl;       // CJava
    
    

    cout << "Loading...\rDone!" << endl;
    cout << "Old Text\rNew" << endl;
    cout << "ABCDEF\rXYZ" << endl;
}
