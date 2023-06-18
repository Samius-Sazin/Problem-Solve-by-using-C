#include <iostream>
using namespace std;

int main()
{
    int row, col;

    while(scanf("%d %d", &row, &col) != EOF)
    {
        int arr[row][col];

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cin >> arr[r][c];
        }
    }

    int Count = 0;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (arr[r][c] == 1)
            {
                cout << "9";
            }

            else
            {
                Count = 0;
                if (arr[r][c + 1]==1 && c<col-1)
                {
                    Count++;
                }
                if (arr[r][c - 1]==1 && c>0)
                {
                    Count++;
                }
                if (arr[r + 1][c]==1 && r<row-1)
                {
                    Count++;
                }
                if (arr[r - 1][c]==1 && r>0)
                {
                    Count++;
                }

                cout << Count;
            }
        }
        cout << endl;
    }
    }

    return 0;
}