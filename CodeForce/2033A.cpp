#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n % 2 == 0) {
        cout << "Sakurako\n";
        return;
    }
    else {
        cout << "Kosuke\n";
        return;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
}
