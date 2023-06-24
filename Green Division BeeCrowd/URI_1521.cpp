#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int i;
        cin >> i;

        while (arr[i-1] != i)
        {
            i = arr[i-1];
        }

        cout << i << endl;
    }

    return 0;
}