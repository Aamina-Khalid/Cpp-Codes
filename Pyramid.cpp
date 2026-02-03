#include<iostream>
using namespace std;

int main(){
    int i, j, k, rows = 4;
    
    for (i = 1; i <= rows; i++){

        for(j = 1; j <= rows - i; j++){
            cout << " ";
        }

        for(k = 1; k <= i; k++){
            cout << k;
        }

        for(k = i - 1; k >= 1; k--){
            cout << k;
        }
        cout << endl;
    }
}

