#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;

    vector <int> v;

    int c = 1, mx = 1;

    int val; cin >> val; v.push_back(val);

    if(n == 1) return 0;

    for(int i = 1; i < n; i++){
        cin >> val;
        v.push_back(val);
        if(v[i-1] == v[i]) c++;
        else c = 1;
        mx = max(mx, c);
    }

    return v.size() - mx;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}
