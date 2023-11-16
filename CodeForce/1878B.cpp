#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    int i = 1;
    while(n--){
        cout << i << " ";
        i+=2;
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}