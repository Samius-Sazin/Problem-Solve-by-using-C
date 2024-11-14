#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n; cin >> n;
    
    vector <int> v;

    for(int i=0; i<n; i++){
        int val; cin>>val;
        v.push_back(val);
    }

    for(int i = 0; i < n-1; i++){
        if(abs(v[i+1] - v[i]) != 5 && abs(v[i+1] - v[i]) != 7){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        if(!solve()){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}
