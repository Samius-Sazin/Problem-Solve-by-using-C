#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define lli long long int

void solve(){
    lli n; cin >> n;

    vector <int> v;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.pb(val);
    }

    int a = -1, b = -1;
    int i = 1, j = v.size()-1;
    while(i <= j){
        if(a == -1 && v[i] != v[0]){
            a = i;
        }
        if(b == -1 && v[j] != v[0]){
            b = j;
        }
        if(a == -1){
            i++;
        }
        if(b == -1){
            j--;
        }
        if(a != -1 && b != -1) break;
    }

    if(a == -1 && b == -1){
        cout << "0\n";
        return;
    }

    int ans1 = b-a+1;

    a = -1, b = -1;
    i = 0, j = v.size()-2;
    while(i <= j){
        if(a == -1 && v[i] != v[v.size()-1]){
            a = i;
        }
        if(b == -1 && v[j] != v[v.size()-1]){
            b = j;
        }
        if(a == -1){
            i++;
        }
        if(b == -1){
            j--;
        }
        if(a != -1 && b != -1) break;
    }

    if(ans1 > b-a+1){
        ans1 = b-a+1;
    }
    cout << ans1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}