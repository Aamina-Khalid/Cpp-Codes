#include<iostream>
using namespace std;

int main(){
	int marks ;
	
	cout<<"Enter your Marks : " ;
	cin>>marks ;
	
	if ( marks  >= 90 && marks <= 100){
		cout<<"\nYou have passed with Grade A" <<endl ;
	}
	else if ( marks >= 80 && marks <=89) {
		cout<<"You have passed with Grade B" <<endl ;
	}
	else if ( marks >= 70 && marks <= 79 ){
		cout<<"You have passed with Grade C" <<endl ;
	}
	else if(marks >= 60 && marks <= 69 ){
		cout<<"You have passed with Grade D" <<endl ;
	}
	else{
		cout<<"You have failed the examination" ;
	}
	return 0;
}
