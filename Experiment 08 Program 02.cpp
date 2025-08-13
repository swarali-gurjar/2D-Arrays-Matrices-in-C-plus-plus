//Addition of two matrices
#include<iostream>
using namespace std;

int main()
{
    int R1, C1, R2, C2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> R1 >> C1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> R2 >> C2;
    if (R1 != R2 || C1 != C2)
    {
        cout << "ERROR: Matrices must have the same dimensions for addition.\n";
        return 0;
    }
    int matrix1[10][10], matrix2[10][10], sum[10][10];
    cout << "\nEnter elements of the first matrix:\n";
    for (int i = 0; i < R1; i++)
        for (int j = 0; j < C1; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    cout << "\nThe first matrix is:\n";
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
            cout << matrix1[i][j] << " ";
        cout << endl;
    }
    cout << "\nEnter elements of the second matrix:\n";
    for (int i = 0; i < R2; i++)
        for (int j = 0; j < C2; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    cout << "\nThe second matrix is:\n";
    for (int i = 0; i < R2; i++)
    {
        for (int j = 0; j < C2; j++)
            cout << matrix2[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < R1; i++)
        for (int j = 0; j < C1; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    cout << "\nSum of the two matrices is:\n";
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}
