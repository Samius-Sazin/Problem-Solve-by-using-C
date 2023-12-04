#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n; cin >> n;
    map<int, int>m;

    for(int i=1; i<=n; i++){
        int va; cin >> va;
        m[va]++;
    }

    if(m.size() > 2) return 0;

    else if(abs(m.begin()->second - m.rbegin()->second) < 2){
        return 1;
    } 
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        if(solve()){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}