#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int hr = stoi(to_string(s[0]-48) + to_string(s[1]-48));
    if(hr > 0 && hr <= 11){
        cout << s << " AM\n";
    }
    else if(hr == 0){
        s[0] = '1';
        s[1] = '2';
        cout << s << " AM\n";
    }
    else{
        if(hr == 12){
            cout << s << " PM\n";
        }
        else{
            hr -= 12;
            if(hr < 10){
                s[0] = '0';
                s[1] = hr+48;
            }
            else{
                s[0] = to_string(hr)[0];
                s[1] = to_string(hr)[1];
            }
            cout << s << " PM\n";
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}