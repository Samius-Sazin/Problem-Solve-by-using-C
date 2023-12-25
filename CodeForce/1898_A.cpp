#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    string s;  cin >> s;

    if(b==0){
        if(s.find("B") == string::npos){
            cout << "0" << endl;
            return;
        }
        cout << "1\n" << s.length() << " A\n";
        return; 
    }

    int cnt = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'B'){
            cnt++;
        }
    }
    if(cnt == b){
        cout << "0\n";
        return; 
    }

    int cnt2 = 0;
    if(cnt < b){
        for(int i=0; i<s.length(); i++){
            if(s[i] != 'B'){
                cnt2++;
                if(cnt2+cnt == b){
                    cout << "1\n" << i+1 << " B\n";
                    return;
                }
            }
        }
    }

    if(cnt > b){
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == 'B'){
                cnt2++;
                if(cnt2 == b){
                    cout << "1\n" << i << " A\n";
                    return;
                }
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}