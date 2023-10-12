#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector <pair <int, int>>v;
    bool ck = true;
    for(int i=0; i<n; i++){
        int val1, val2; cin >> val1 >> val2;
        v.push_back({val1, val2});
    }

    for(int i=1; i<n; i++){
        if(i>0 && v[i].first >= v[0].first && v[i].second >= v[0].second){
            ck = false;
        }
    }

    if(!ck){
        return -1;
    }
    return v[0].first;
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}