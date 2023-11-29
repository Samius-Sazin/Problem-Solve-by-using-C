#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int sum = 0;

    if(s[0] == '0'){
        sum = 10;
    }
    else{
        sum = abs((s[0]-48) - 1) + 1;
    }
   
    for(int i=1; i<4; i++){
        if(s[i] == '0' && s[i-1] != '0'){
            sum += 10 - (s[i-1] - 48) + 1;
        }
        else if(s[i] == '0' && s[i-1] == '0'){
            sum += 1;
        }
        else if(s[i] != '0' && s[i-1] == '0'){
            sum += 10 - (s[i] - 48) + 1;
        }
        else{
            sum += abs((s[i]-48) - (s[i-1] - 48)) + 1;
        }
    }

    cout << sum << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}