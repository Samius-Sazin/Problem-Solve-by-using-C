#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    map <char, int> m;

    string s = "abcdefghijklmnopqrstuvwxyz";
    int j = 0;

    for(int i=0; i<n; i++){
        int x; cin >> x;

        if(x == 0){
            m.insert({s[j], 1});
            cout << s[j];
            j++;
        }
        else{
            for(auto &k : m){
                if(k.second == x){
                    m[k.first]++;
                    cout << k.first;
                    break;
                }
            }
        }
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}