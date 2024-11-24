#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k, n, t, x=0; cin >> k >> n >> t;

    for(int i = 1; i <= t; i++){
        x += i*k;
    }

    cout << (n > x ? 0 : x - n) << endl;
}
