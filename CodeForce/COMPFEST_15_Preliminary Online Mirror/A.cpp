#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>v;
    int ans = INT_MAX;
    int minus;
    for(int i=0; i<n; i++){
        int val;  cin >> val;
        v.push_back(val);
        ans = min(abs(v[i]), ans);
    }
    cout << ans << endl;
}
