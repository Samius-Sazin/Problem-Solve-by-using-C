#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> v;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    
    int product = 1;
    v[0] += 1;
    for(int i=0; i<n; i++){
        product *= v[i];
    }
    cout << product << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}