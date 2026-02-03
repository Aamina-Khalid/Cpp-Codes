#include <iostream>
using namespace std;

// Function to find the sum of a specific column
// Note: When passing 2D arrays to functions, you must specify the column size
void findColumnSum(int matrix[3][3], int colIndex) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][colIndex]; // row index changes, column index stays fixed
    }
    cout << "\nThe sum of column " << colIndex << " is: " << sum << endl;
}

int main() {
    int matrix[3][3];
    int chosenCol;

    // 1. Take values from the user
    cout << "Enter 9 values for a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // 2. Display the matrix
    cout << "\nYour 3x3 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl; // New line after each row
    }

    // 3. Ask for a specific column to sum
    cout << "\nEnter the column index you want to sum (0, 1, or 2): ";
    cin >> chosenCol;

    // Basic validation to ensure the column exists
    if (chosenCol >= 0 && chosenCol < 3) {
        findColumnSum(matrix, chosenCol);
    } else {
        cout << "Invalid column index!" << endl;
    }

    return 0;
}

