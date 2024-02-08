#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    map <char, int> m;

    char ch = 'a';
    string ans;

    for(int i=0; i<n; i++){
        int x; cin >> x;

        if(x == 0){
            m.insert({ch, 1});
            ans.push_back(ch);
            ch++;
        }
        else{
            for(auto &k : m){
                if(k.second == x){
                    m[k.first]++;
                    ans.push_back(k.first);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
}
