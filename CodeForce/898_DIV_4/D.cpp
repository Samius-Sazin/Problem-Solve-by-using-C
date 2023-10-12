#include<bits/stdc++.h>
using namespace std;

int solve(){
    int a, b; cin >> a >> b;
    //fflush(stdin);
    string s; cin >> s;
    int count = 0;
    int ans = 0;
    for(int i=0; i<a; i++){
        if(s[i] == 'B'){
            count++;
        }
        else if(count != 0 && s[i] == 'W'){
            count++;
        }
        if(count == b){
            ans++;
            count = 0;
        }
    }
    if(count != 0){
        ans++;
    }
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}