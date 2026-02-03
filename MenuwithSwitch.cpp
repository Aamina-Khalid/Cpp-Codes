#include<iostream>
using namespace std;

int main(){
	int  choice;
	
	cout<<" ====== Fast Food Menu ======" <<endl;
	cout<<"1. Burger " <<endl;
	cout<<"2. Pizza " <<endl;
	cout<<"3. Sandwich"<<endl;
	cout<<"4. Fries" <<endl;
	cout<<"5. Exit" <<endl;
	
	cout<<endl;
	
	cout<<"Enter your Choice : " ;
	cin>>choice ;
	
	switch(choice){
		case 1 : 
		cout<<"You selected Burger. Price is 600 " <<endl;
		break;
		
		case 2 : 
		cout<<"You selected Pizza. Price is 1000 " <<endl;
		break;
		
		case 3 : 
		cout<<"You selected Sandwich. Price is 500 " <<endl;
		break;
		
		case 4 : 
		cout<<"You selected Fries. Price is 250 " <<endl;
		break;
		
		case 5 : 
		cout<<"Thank you for choosing this Resturant. Good Bye " <<endl ;
		break;
		
		default :
		cout<<"You entered a number that is not in the menu, Try again" ;
	}
}
