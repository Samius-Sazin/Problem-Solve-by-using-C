#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int xrr[n+1];

    fill_n(xrr, n+1, 2);

    vector<int> v[2];

    int x, y;
    cin >> x >> y;
    for(int i=0; i<x; i++){
        int val; cin >> val;
        v[0].push_back(val);
        xrr[val] = 1;
    }

    for(int i=0; i<y; i++){
        int val; cin >> val;
        v[1].push_back(val);
    }

    for(int i=1; i<=n; i++){
        cout << xrr[i] << " ";
    }
    

    return 0;
}