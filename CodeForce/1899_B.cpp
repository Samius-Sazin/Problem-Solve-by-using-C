#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;

    vector <int> v;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back(val);
    }

    int ck = 0;
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            ck = 1;
        }
    }
    if(!ck){
        cout << "0" << endl;
        return;
    }

    long long int sum = 0;
    int cnt = 0;
    long long int ans_max = LLONG_MIN;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            long long int mx = LLONG_MIN;
            long long int mn = LLONG_MAX;;
            for(long long int j=0; j<n; j++){
                cnt++;
                sum += v[j];
                if(cnt == i){
                    mx = max(sum, mx);
                    mn = min(sum, mn);
                    sum = 0;
                    cnt = 0;
                }
            }
            ans_max = max(ans_max, (mx - mn));
        }
    }
    cout << ans_max << endl;
}

int main(){
    long long int t; cin >> t;
    while(t--){
        solve();
    }
}