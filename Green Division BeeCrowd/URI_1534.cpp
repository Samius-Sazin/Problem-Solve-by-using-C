#include <iostream>
using namespace std;

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int arr[n][n];
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                arr[r][c] = 3;
            }
        }

        int div = n/2;

        for (int r = 0; r < n; r++)
        {
            int i = r;
            for (int c = 0; c < n; c++)
            {
                if (r == c)
                {
                    arr[r][c] = 1;
                }

                if(r==i && c==n-(i+1))
                {
                    arr[r][c] = 2;
                }
            }
        }

        if(n%2)
        {
            arr[div][div] = 2;
        }

        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < n; c++)
            {
                cout << arr[r][c];
            }
            cout << endl;
        }
    }

    return 0;
}