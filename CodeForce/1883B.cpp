#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    fflush(stdin);
    string s; cin >> s;
    int ln = s.length();

    int cntOdd = 0;

    int xrr[26];
    for(int i=0; i<26; i++){
        xrr[i] = 0;
    }

    while(ln-- > 0){
        xrr[(int)s[ln] - 97]++;
    }

    if(b == 0){
        for(int &i : xrr){
            if(i % 2 != 0){
                cntOdd++;
            }
        }
        if(cntOdd > 1){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
    }

    while(b--){
        bool xyz = false;
        for(int i=0; i<26; i++){
            if(xrr[i] % 2 != 0){
                xrr[i]--;
                xyz = true;
                break;
            }
        }

        if(!xyz){
            for(int i=0; i<26; i++){
                if(xrr[i] > 0){
                    xrr[i]--;
                    break;
                }
            }
        }
    }

    for(int &i : xrr){
        if(i % 2 != 0){
            cntOdd++;
        }
    }
    if(cntOdd > 1){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        return;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}