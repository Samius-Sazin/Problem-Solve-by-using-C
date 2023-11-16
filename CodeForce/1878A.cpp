#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector <int> v;
    bool check = 0;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back(val);
        if(val == k){
            check = 1;
        }
    }

    if(check){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}