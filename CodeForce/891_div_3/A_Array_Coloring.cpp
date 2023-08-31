#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    vector<vector<int>>v;
    for(int i=0; i<t; i++){
        int x; cin >> x;
        int sum = 0;
        v.push_back(vector<int>());
        for(int j=0; j<x; j++){
            int val; cin >> val;
            v[i].push_back(val);
            sum += val;
        }
        if(sum %2 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }

}