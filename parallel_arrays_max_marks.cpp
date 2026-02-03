#include<iostream>
#include<string>
using namespace std;

void maximumMarks(string names[] , int marks[] , int maxMarks){
	cout<<"Student with highest marks are : " ;
	for( int i = 0 ; i < 5 ; i++){
		if(marks[i] > maxMarks ){
			maxMarks = marks[i] ;
		}
	}
	cout<<maxMarks ;
}

int main(){
	int  i , maxMarks , mark[5];
	string names[5] ;
	i = 0 ;
	cout<<"Enter the marks you want to compare your students marks with : " ;
	cin>>maxMarks ;
	
	cout<<"Enter names of the students and then the marks of the students : " <<endl;
	while(i < 5){
		cout<<"Name " <<i + 1 <<" : " ;
		cin>>names[i] ;
		cout<<"Marks " <<i + 1 <<" : " ;
		cin>>mark[i] ;
		i++ ;
	}
	maximumMarks(names , mark , maxMarks) ;
	
	return 0 ;
}

