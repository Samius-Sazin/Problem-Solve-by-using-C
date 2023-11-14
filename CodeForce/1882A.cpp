#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector <int> v1, v2;
    int n; cin >> n;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v1.push_back(val);
    }

    if(v1[0] == 1){
        v2.push_back(2);
    } else{
        v2.push_back(1);
    }

    for(int i=1; i<n; i++){
        if(v1[i] == v2[i-1]+1){
            v2.push_back(v1[i]+1);
        } else{
            v2.push_back(v2[i-1]+1);
        }
    }

    cout << v2[v2.size() - 1] << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}