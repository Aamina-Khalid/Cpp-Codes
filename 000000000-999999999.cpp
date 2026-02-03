#include<iostream> 
#include<iomanip> 
#include<windows.h> 
using namespace std; 
int main(){ 
  
 int number , a , b , c , d , e , f , g , h , i ; 
  
 for(number = 0 ; number <= 9 ; number++){ 
  for(a = 0 ; a <= 9 ; a++){ 
   for(b = 0 ; b <= 9 ; b++){ 
    for(c = 0 ; c <= 9 ; c++){ 
     for(d = 0 ; d <= 9 ; d++){ 
      for(e = 0 ; e <= 9 ; e++){ 
       for(f = 0 ; f <= 9 ; f++){ 
        for(g = 0 ; g <= 9 ; g++){ 
         for(h = 0 ; h <= 9 ; h++){ 
                 cout<< number << a 
<< b << c << d << e << f << g << h<<endl; 
                 Sleep(1); 
         } 
        } 
       } 
      } 
     } 
    } 
   } 
  } 
 } 
  
return 0 ; 
} 
