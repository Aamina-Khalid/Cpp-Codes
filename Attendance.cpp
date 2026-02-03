#include<iostream>
using namespace std;

int main(){
	int attendance ;
	cout<<"Enter your attendance percentage : " ;
	cin>>attendance ;
	
	if(attendance >= 75){
		cout<<"\nAllowed to sit in exam" ;
		 if( attendance == 100 ){
		 	cout<<"\nPerfect attendance award" ;
		 }
		 else{
		 	cout<<"\nOverall a good attendance" ;
		 }
	}
	else{
		cout<<"\nNot allowed to sit in exam" ;
	}
	return 0;
}
