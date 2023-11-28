#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int a, b, n; cin >> a >> b >> n;
    long long int ans = 0, c=1;
    vector <long long int> v;
    for(int i=0; i<n; i++){
        long long int val; cin >> val;
        v.push_back(val);
    }

    if(b > 1){
        ans = b - 1;
    }
    
    for(int i=0; i<n; i++){
        
        c = min(v[i]+1, a);
        if(c > 1){
            ans += c-1;
        }
    }

    cout << ans+1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}