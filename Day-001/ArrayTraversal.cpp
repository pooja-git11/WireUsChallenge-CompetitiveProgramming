#include<iostream>
using namespace std;

int main()
{
    int row, col, i, j , k;

    cout << "Row ? Column ? ";
    cin >> row >> col;

    int arr[row][col];

    cout << "Enter Matrix : \n";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0 ;j < col; j++)
            cin >> arr[i][j];
    }

    for(i = 0; i < col; i++) //keep count of column
    {
        for(j = 0; j < row; j++)            //print 1st col from top to bootom
            cout << arr[j][i] << " ";

        for(k = j - 1, i = i + 1; i < col && k >= 0; k--) //print 2col from bottom to top
            cout << arr[k][i] << " ";
    }
}
