#include<iostream>
using namespace std;

void square(void){
	for(int i = 0 ; i < 6 ; i++){
		for(int j = 0 ; j < 6 ; j++){
			cout<<"* " ;
		}
			cout<<endl;
	}
	cout<<endl;
}

void square(char ch){
	for(int i = 0 ; i < 6 ; i++){
		for(int j = 0 ; j < 6 ; j++){
			cout<<ch<<" " ;
		}
		cout<<endl;
	}
	cout<<endl;
}

void square(char ch , int a){
	for(int i = 0 ; i < 6 ; i++){
		for(int j = 0 ; j < 6 ; j++){
			cout<<ch<<" " ;
		}
			cout<<endl;
	}
	cout<<endl;
}

int main(){
	square();
	square('&');
	square('@' , 8);
}
