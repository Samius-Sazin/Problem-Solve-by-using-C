#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n; cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back(val);
    }
    if(n <= 3) return 1;
    int i, j;
    for(i=2; i<=n; i=j+1){
        if(i*2 > n) break;
        for(j=i; j<2*i - 1; j++){
            if(v[j] > v[j+1]){
                return 0;
            }
        }
    }
    for(int k=i; k<n-1; k++){
        if(v[k] > v[k+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        if(solve()){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }
}