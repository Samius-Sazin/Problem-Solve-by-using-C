#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m, b; cin >> m >> b;
    map<int, int> m1;

    for(int i = 0; i < b; i++){
        int val1, val2; cin >> val1 >> val2;
       
        if(m1[val1]){
            m1[val1] += val2;
        }
        else{
            m1[val1] = val2;
        }
    }

    vector <int> v1;
    for(auto &i : m1){
        v1.push_back(i.second);
    }
    sort(v1.begin(), v1.end(), greater<int>());

    int sum = 0;

    for(int i = 0; i < m && i < v1.size(); i++){
        sum += v1[i];
    }

    cout << sum << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
}
