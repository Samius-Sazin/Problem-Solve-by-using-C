#include <bits/stdc++.h>
using namespace std;

void solve(long int l, long int r)
{
    if(l==1 && r==1)
    {
        cout << "-1\n";
        return;
    }

    for (long int i = r; i >= l; i--)
    {
        if (i % 2 == 0 && i != 2)
        {
            cout << "2 " << i - 2 << endl;
            return;
        }
    }

    for (long int i = r; i >= l; i--)
    {
        if (i % 3 == 0 && i != 3)
        {
            cout << "3 " << i - 3 << endl;
            return;
        }
        if (i % 5 == 0 && i != 5)
        {
            cout << "5 " << i - 5 << endl;
            return;
        }

        if (i % 7 == 0 && i != 7)
        {
            cout << "7 " << i - 7 << endl;
            return;
        }

        for(long int j=11; j<=sqrt(i); j+=2){
            if(i % j == 0){
                cout << j << " " << i-j << endl;
                return;
            }
        }
    }

    for (long int i = r; i >= l; i--)
    {
        if(floor(sqrt(i)) != sqrt(i)){
            cout << "-1\n";
            return;
        }

        if (i % (int)(sqrt(i)) == 0)
        {
            cout << (int)(sqrt(i)) << " " << i - (int)(sqrt(i)) << endl;
            return;
        }
    }

    cout << "-1\n";
    return;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long int l, r;
        cin >> l >> r;

        if (r < l) swap(r, l);
        solve(l, r);
    }
}