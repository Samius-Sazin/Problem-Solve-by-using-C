#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        vector <int> v;
        v.push_back(y);
        int val,minus = 0, decreasing = 0;
        for(int i=1; i<n; i++){
            y = y - i;
            v.push_back(y);
        }
        reverse(v.begin(), v.end());

        if(v[0] < x){
            cout << "-1\n";
        }
        else{
            v[0] = x;
            for(int &i : v){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    
}