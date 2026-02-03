#include<iostream>
using namespace std;

int main(){
int num , i , j , sum = 0 , totalSum;

  cout<<"Enter a number you want to display your series till : " ;
  cin>>num ;
  
  for(i = 1 ; i <= num ; i++){
  	sum = sum + i ;
  	cout<<sum;
  	totalSum += sum ;
  	cout<<"  ";
  }
  cout<<"\nThe series sum is : " <<totalSum ;
}
