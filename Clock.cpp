#include<iostream> 
#include<iomanip> 
#include<windows.h> 
using namespace std; 
int main(){ 
int hours , mins , secs ; 
for(hours = 1 ; hours <= 12 ; hours++ ){ 
for(mins = 0 ; mins < 60 ; mins++ ){ 
for(secs = 0 ; secs < 60 ; secs++ ){ 
cout<<setw(2) << setfill('0') <<hours << " : " ; 
cout<<setw(2) << setfill('0') <<mins << " : " ; 
cout<<setw(2) << setfill('0') <<secs ; 
cout<<endl ; 
Sleep(1000) ; 
} 
} 
} 
return 0 ; 
} 
