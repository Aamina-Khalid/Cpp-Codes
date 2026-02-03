#include<iostream>
using namespace std;

int main(){
	int numbers[5] = {5, 10, 15, 20, 25};
int sum = 0;

for(int i = 1; i <= 5; i++) {
    sum += numbers[i];
}
cout << sum;
}
