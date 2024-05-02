#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int n;
    cin >> n;

    vector<int> ch(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }

    int q;
    cin >> q;

    for (int j = 0; j < q; j++)
    {
        int lh;
        cin >> lh;

        int si = 0, ei = n - 1, x = -1;
        while (si <= ei)
        {
            int mid = (si + ei) / 2;
            if (ch[mid] < lh)
            {
                x = ch[mid];
                si = mid + 1;
            }
            else
            {
                ei = mid - 1;
            }
        }

        si = 0, ei = n - 1;
        int y = -1;
        while (si <= ei)
        {
            int mid = (si + ei) / 2;
            if (ch[mid] > lh)
            {
                y = ch[mid];
                ei = mid - 1;
            }
            else
            {
                si = mid + 1;
            }
        }

        if (x == -1)
        {
            cout << "X ";
        }
        else
        {
            cout << x << " ";
        }

        if (y == -1)
        {
            cout << "X" << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}

int main()
{
    int t = 1;
    while (t--)
    {
        solution();
    }
    return 0;
}