#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n%3==1 || n%3==2){
        cout << "First\n";
    }
    else cout << "Second\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}