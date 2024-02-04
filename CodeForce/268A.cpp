#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;

    vector < pair <int, int> > v;

    for(int i=0; i<n; i++){
        int val1, val2; cin >> val1 >> val2;
        pair <int, int> p; p = make_pair(val1, val2);
        v.push_back(p);
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i].first == v[j].second){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    cout << solve() << endl;
}