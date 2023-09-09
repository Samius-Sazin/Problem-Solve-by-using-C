#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;

    int key, value;
    int ans = INT_MAX, numb_of_blocks = 0;
    for(int i=0; i<n;  i++){
        cin >> key >> value;

        numb_of_blocks = (value - 1) / 2;
        numb_of_blocks += key;
        ans = min(ans, numb_of_blocks);
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}