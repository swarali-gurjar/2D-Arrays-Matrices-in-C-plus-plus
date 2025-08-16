//Comparison of first row of matrix with the second row
#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    if (rows < 2) {
        cout << "Matrix must have at least 2 rows for comparison.\n";
        return 0;
    }
    int matrix[3][3];
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
    cout << "\nComparison of first row with second row:\n";
    for (int j = 0; j < cols; j++) {
        cout << "Element at column " << j << ": ";
        if (matrix[0][j] == matrix[1][j])
            cout << matrix[0][j] << " == " << matrix[1][j] << endl;
        else if (matrix[0][j] > matrix[1][j])
            cout << matrix[0][j] << " > " << matrix[1][j] << endl;
        else
            cout << matrix[0][j] << " < " << matrix[1][j] << endl;
    }

    return 0;
}


