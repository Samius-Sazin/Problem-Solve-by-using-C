#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;
    unordered_map <int, int> m;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        m.insert({a, b});
        if(a==0){
            c1++;
        }
        else{
            c2++;
        }
        if(b==0){
            c3++;
        }
        else{
            c4++;
        }
    }
    return min(c1, c2) + min(c3, c4);
}

int main(){
    // int t; cin >> t;
    // while(t--){
        cout << solve() << endl;
    // }
}