#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    int ans = INT_MIN;
    int prevMax = v[0];
    int prevMin = v[0];

    for(int i=1; i<n;  i++){
        ans = max(ans, max(prevMax-v[i], prevMin-v[i]));
        prevMax = max(prevMax, v[i]);
        prevMin = min(prevMin, v[i]);
    }

    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}