#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++) {
        int val; cin >> val;
        v.push_back(val);
    }

    if(n%2 == 0){
        cout << "2" << endl;
        cout << "1 " << n << endl;
        cout << "1 " << n << endl;
        return;
    }

    cout << "4" << endl;
    cout << "1 " << n-1 << endl;
    cout << "1 " << n-1 << endl;
    cout << n-1 << " " << n << endl;
    cout << n-1 << " " << n << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
}