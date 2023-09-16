#include<bits/stdc++.h>
using namespace std;

void solve(){
    string str; cin >> str;
    str = '0' + str;

    int p = str.size();
    for(int i = str.size()-1; i>0; i--){
        if(str[i] >= '5'){
            str[i-1]++;
            p = i;
        }
    }

    for(int i=(str[0]=='0'); i<str.size(); i++){
        cout << ( i<p ? str[i] : '0'); 
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}