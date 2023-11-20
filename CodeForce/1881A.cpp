#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;

    int Count = 0;
    while(a.find(b) == string::npos){
        a.append(a);
        Count++;

        if(Count > 5){
            cout << "-1\n";
            return;
        }
    }
    cout << Count << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}