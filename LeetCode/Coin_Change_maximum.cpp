#include<bits/stdc++.h>
using namespace std;

long long int solve(){
    int n, s; cin >> n >> s;
    vector <int> v, vv; v.push_back(0);
    for(int i=1; i<=(2*n); i++){
        int val; cin >> val;
        if(i > n) {
            vv.push_back(val);
            continue;
        }
        v.push_back(val);
    }

    long long int arr[n+1][s+1];
    memset(arr, 0, sizeof(arr));

    for(int r=0; r<=n; r++){
        for(int c=0; c<=s; c++){
            if(c == 0){
                arr[r][c] = 1;
                continue;
            }
            if(r == 0){
                arr[r][c] = 0;
                continue;
            }
            if(v[r] > c){
                arr[r][c] = arr[r-1][c];
            }

            long long int upperValue = arr[r-1][c];
            for(int x=1; x<=vv[r-1] && x*v[r]<=c; x++){
                arr[r][c] = (upperValue + arr[r][c] + arr[r-1][c - (x*v[r])]) % 100000007;
                upperValue = 0;
            }
        }
    }
    return arr[n][s];
}

int main(){
    int t; cin >> t;
    for(int i=1; i<=t; i++){
        long long int ans = solve();
        cout << "Case " << i << ": " << ans << endl;
    }
}