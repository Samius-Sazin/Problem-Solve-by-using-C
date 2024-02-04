#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n, s, e, x;
    cin >> n >> s >> e >> x;

    if((abs(s-e) % x) == 0){
         return (abs(s-e) / x);
    }

    int a = (s-1)%x ?  ((s-1)/x)+1 : (s-1)/x;
    int ans1 = (e-1)%x ? 0 : ((e-1)/x)+a;

    int b = (n-s)%x ? ((n-s)/x)+1 : (n-s)/x;
    int ans2 = (n-e)%x ? 0 : ((n-e)/x)+b;

    if(!ans1 && !ans2) return -1;

    if(!ans1) return ans2;

    if(!ans2) return ans1;

    return min(ans1, ans2);
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}