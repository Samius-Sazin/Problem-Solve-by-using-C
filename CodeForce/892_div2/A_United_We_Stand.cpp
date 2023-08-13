#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> b, c;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int count = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
        }

        if (count == n - 1)
        {
            cout << "-1" << endl;
            continue;
        }

        b.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (arr[0] == arr[i])
            {
                b.push_back(arr[0]);
            }
            else
            {
                c.push_back(arr[i]);
            }
        }

        cout << b.size() << " " << c.size() << endl;

        for (int &i : b)
        {
            cout << i << " ";
        }
        cout << endl;

        for (int &i : c)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}