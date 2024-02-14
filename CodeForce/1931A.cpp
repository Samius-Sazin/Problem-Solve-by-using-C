#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    
    string str = "*abcdefghijklmnopqrstuvwxyz";

    if(n <= 28){
        cout << "aa" << str[n-2] << endl;
        return;
    }

    if(n >= 53){
        cout << str[n-52] << "zz\n";
        return;
    }

    cout << "a" << str[n-27] << "z\n";
}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}