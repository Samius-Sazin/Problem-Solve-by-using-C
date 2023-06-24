#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin >> arr[r][c];
        }
    }

    for(int r=1; r<row-1; r++)
    {
        for(int c=1; c<col-1; c++)
        {
            if(arr[r][c] == 42)
            {
                if(arr[r-1][c]==7 && arr[r][c-1]==7 && arr[r+1][c]==7 && arr[r][c+1]==7 && arr[r+1][c+1]==7 && arr[r-1][c-1]==7 && arr[r+1][c-1]==7 && arr[r-1][c+1]==7)
                {
                    cout << r+1 << " " << c+1 << endl;
                    return 0;
                }
            }
        }
    }

    cout << "0 0" << endl;

    return 0;
}