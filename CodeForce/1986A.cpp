#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a, b; cin >> a >> b;
    int cnt = 0;
    vector <string> v;

    for(int i = 0; i < a; i++){
        string s; cin >> s;
        v.push_back(s);
    }

    for(int i = 0; i < a; i++){
        if(v[i].length() > b) break;
        cnt++;
        b -= v[i].length();
    }

    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}
