#include<bits/stdc++.h>
using namespace std;

typedef long long lli;

void solve(){
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector < pair <lli, lli> > v;

    for(int i=0; i<n; i++){
        lli x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    lli ans = abs(v[a-1].first - v[b-1].first) + abs(v[a-1].second - v[b-1].second);

    lli ans1 = LLONG_MAX/2, ans2 = LLONG_MAX/2;
    for(int i=0; i<k; i++){
        ans1 = min(ans1, abs(v[a-1].first - v[i].first) + abs(v[a-1].second - v[i].second));
        ans2 = min(ans2, abs(v[b-1].first - v[i].first) + abs(v[b-1].second - v[i].second));
    }

    cout << min(ans, (ans1+ans2)) << endl;
}


int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
