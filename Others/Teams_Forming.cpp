#include<bits/stdc++.h>
using namespace std;

#define pb push_back

//Sort a vector
void SORT(vector<int> &v){
    sort(v.begin(), v.end());
}

void solve(){
    int n; cin >> n;

    vector <int> v;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.pb(val);
    }

    SORT(v);

    int ans = 0;

    for(int i=0; i<n-1; i+=2){
        if(v[i+1]-v[i] > 0){
            ans += v[i+1]-v[i];
        }
    }

    cout << ans << endl;
}

int main(){
    
    solve();
}