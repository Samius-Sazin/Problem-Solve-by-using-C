#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector< vector <char> > v;

    for(int i = 0; i < n; i++){
        vector <char> v1;

        for(int j = 0; j < 4; j++){
            char val; cin >> val;
            v1.push_back(val);
        }
        v.push_back(v1);
    }

    for(int i = n-1; i >= 0; i--){
        for(int j = 3; j >= 0; j--){
            if(v[i][j] == '#')
                cout << j+1 << " ";
        }
    }

    cout << endl;
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
