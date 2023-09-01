#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        vector<int>v;
        int n; cin>>n;
        for(int i=0; i<n; i++){
            int val; cin>>val;

            if(i>0 && val < v[v.size()-1]){
                v.push_back(val);
            }

            v.push_back(val);
        }

        cout << v.size() << endl;

        for(int &i : v){
            cout << i << " ";
        }
        cout << endl;
    }
}