//Taking input from user for the matrix and then dsiplaying the matrix
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int rows,cols,matrix;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    cout<<"Enter elements of the matrix:\n";
    for(int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cout<<"Elements["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"\nMatrix is\n";
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
