#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, d; cin >> n >> m >> d;
    vector <int> v, b, vx;
    for(int i=0; i<m; i++){
        int val; cin >> val;
        v.push_back(val);
    }

    int num = 0, ttl = INT_MAX;
    int gap = 0;
    int ck = 0;
    int xxx;

    for(int k=0; k<=m; k++){
        num = 0;
        gap = -1;

        if(k>0){
            xxx = v[0];
            v.erase(v.begin() + 0);
        }

        vx = v; sort(vx.begin(), vx.end());

        if(vx[0] != 1){
            num++;
        }

        for(int i=1; i<=n; i++){
            ck = 0;
            for(int j=0; j<vx.size(); j++){
                if(i < vx[j]){
                    break;
                }
                else if(i == vx[j]){
                    num++; ck = 1;
                }
            }
            if(ck == 0){
                gap++;
            }
            else{
                gap = 0;
            }
            if(gap == d){
                num++;
                gap = 0;
            }
        }

        ttl = min(num, ttl);
        b.push_back(num);

        if(k > 0){
            v.push_back(xxx);
        }
    }
    
    sort(b.begin(), b.end());
    int c = count(b.begin(), b.end(), b[0]);

    cout << ttl << " " << c << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}