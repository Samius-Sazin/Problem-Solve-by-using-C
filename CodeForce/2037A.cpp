#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    map <int, int> m;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        m[val] += 1;
    }

    int c = 0;

    for(auto &i: m) {
        c += i.second / 2;
    }

    cout << c << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
}
