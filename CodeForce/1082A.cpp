#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n, s, e, x;
    cin >> n >> s >> e >> x;

    if((abs(s-e)/x) == 0){
        return (abs(s-e)/x);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}