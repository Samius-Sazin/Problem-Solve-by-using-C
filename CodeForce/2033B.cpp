#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        int mn = 0;
        for(int j = 0, k = i; j < n && k < n; j++, k++){
            if(v[j][k] < 0){
                mn = min(mn, v[j][k]);
            }
        }
        ans += abs(mn);
    }

    for(int i = n-1; i > 0; i--){
        int mn = 0;
        for(int j = i, k = 0; j < n; j++, k++){
            if(v[j][k] < 0){
                mn = min(mn, v[j][k]);
            }
        }
        ans += abs(mn);
    }

    cout << ans << endl;
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
