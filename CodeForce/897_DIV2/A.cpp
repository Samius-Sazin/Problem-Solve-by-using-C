#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    vector < pair <int, int> > v;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back({val, i});
    }

    sort(v.begin(), v.end());

    int xrr[n];

    for(int i=0, j=n; i<n; i++){
        xrr[v[i].second] = j--;
    }

    for(int &i : xrr){
        cout << i << " ";
    } cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}