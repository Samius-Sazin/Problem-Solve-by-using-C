#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    vector <int> v;

    for (int i = 0; i < k; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    int si =  0, ei = k-1;

    while(si < ei) {
        if(v[si] * v[ei] == k-2) {
            cout << v[si] << " " << v[ei] << endl;
            return;
        }
        else if(v[si] * v[ei] > k-2) {
            ei--;
        }
        else if(v[si] * v[ei] < k-2) {
            si++;
        }
    }


    // for (int i = 0; i < k - 1; i++)
    // {
    //     int l = i+1, r = k-1;

    //     while (l <= r)
    //     {
    //         int mid = (r-l)/2 + l;
            
    //         if (v[i] * v[mid] == k - 2)
    //         {
    //             cout << v[i] << " " << v[mid] << endl;
    //             return;
    //         }
    //         else if (v[0] * v[mid] > k - 2)
    //         {
    //             r = mid - 1;
    //         }
    //         else if (v[0] * v[mid] < k - 2)
    //         {
    //             l = mid + 1;
    //         }
    //     }
    // }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
