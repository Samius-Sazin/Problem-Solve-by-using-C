#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int row, col;
    while (scanf("%d %d", &row, &col) != EOF)
    {
        int arr[row][col];
        int r1 = -1, c1 = -1, r2, c2;

        for (int r = 0; r < row; r++)
        {
            for (int c = 0; c < col; c++)
            {
                cin >> arr[r][c];
                if (arr[r][c] > 0)
                {
                    r2 = r;
                    c2 = c;
                    if (r1 == -1 && c1 == -1)
                    {
                        r1 = r;
                        c1 = c;
                    }
                }
            }
        }
            int r = r1 - r2;
            int c = c1 - c2;
             r = abs(r);
             c = abs(c);
            cout << r+c << endl;
    }

    return 0;
}
