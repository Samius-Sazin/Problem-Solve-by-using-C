#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    vector <int> v;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back(val);
    }

    int SWAP = 0;

    int x = n-1;
    while(x >= 1){
        for(int i=0; i<x; i++){
            if(v[i] > v[i+1]){
                swap(v[i], v[i+1]);
                SWAP++;
            }
        }
        x--;
    }

    return SWAP;
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << "Optimal train swapping takes " << solve() << " swaps." << endl;
    }
}