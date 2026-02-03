#include<iostream>
using namespace std;

int largest(int, int, int, int); 

int main(){
	
    int num1, num2, num3, num4;
    
    cout << "Enter four integers: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;
    
    cout << "The largest among " <<num1 <<"," <<num2 <<"," <<num3 <<"," <<num4 <<" is : "<< largest(num1, num2, num3, num4);
    
    return 0;
}

int largest(int a, int b, int c, int d){
	
    int max = a;                //Let's assume a is largest  
    
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;
    
    return max;
}
