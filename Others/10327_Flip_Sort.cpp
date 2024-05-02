#include<bits/stdc++.h>
using namespace std;

void solve(int n){
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

    cout << "Minimum exchange operations : " << SWAP << endl;
}

int main(){
    
    int n;
    while(1){
        cin >> n;
        if(cin.eof()){
            break;
        }
        solve(n);
    }
}