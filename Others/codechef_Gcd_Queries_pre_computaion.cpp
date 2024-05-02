#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        int arr[n+10];
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }

        int forward[n+10];
        int backword[n+10];
        forward[0] = backword[n+1] = 0;
        for(int i=1; i<=n; i++){
            forward[i] = __gcd(forward[i-1], arr[i]);
        }
        for(int i=n; i>=1; i--){
            backword[i] = __gcd(backword[i+1], arr[i]);
        }

        while(q--){
            int l, r; cin >> l >> r;
            int ans = __gcd(forward[l-1], backword[r+1]);
            cout << ans << endl;
        }
    }
}