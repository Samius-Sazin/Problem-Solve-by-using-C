#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (n == 1)
    {
        if (a == b)
        {
            cout << "1\n"
                 << a << ":" << b << endl;
        }
        else
        {
            cout << "0\n"
                 << a << ":" << b << endl;
        }
        return 0;
    }

    vector<pair<int, int>> v(n);
    for (auto &i : v)
    {
        i.first = 0;
        i.second = 0;
    }

    int pos = 0;
    int draw = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (a)
        {
            v[i].first = 1;
            a--;
            pos++;
        }
        else
        {
            break;
        }
    }
    if (a)
    {
        v[0].first += a;
        a = 0;
    }

    if (b)
    {
        if (pos == n)
        {
            v[0].first += v[n - 1].first;
            v[n - 1].first = 0;
            v[n - 1].second = b;
            b = 0;
        }

        else
        {
            for (int i = pos; i < v.size(); i++)
            {
                if (b)
                {
                    v[i].second = 1;
                    b--;
                }
            }

            if (b)
            {
                v[n - 1].second += b;
                b = 0;
            }
        }
    }

    for (auto &i : v)
    {
        if (i.first == i.second)
        {
            draw++;
        }
    }

    cout << draw << endl;

    for (auto &i : v)
    {
        cout << i.first << ":" << i.second << endl;
    }

    return 0;
}