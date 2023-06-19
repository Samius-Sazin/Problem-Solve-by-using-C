#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int arr[n][n];
        memset(arr, 0, sizeof(arr));

        int x = n / 3;
        int y = x;
        int div = n / 2;
        int i = 0;

        for (int r = 0; r < n; r++)
        {
            i = r;
            for (int c = 0; c < n; c++)
            {
                if (r == c)
                {
                    if (r < x || r >= (n - x))
                        arr[r][c] = 2;
                }

                if (r == i && c == n - (i + 1))
                {
                    if (r < x || r >= (n - x))
                        arr[r][c] = 3;
                }
            }
        }

        for (int r = x; r < n - x; r++)
        {
            for (int c = x; c < n - x; c++)
            {
                arr[r][c] = 1;
            }
        }

        if(n%2)
        {
            arr[div][div] = 4;
        }

        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                cout << arr[r][c];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}