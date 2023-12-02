#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;

    int mul = 1;
    vector <int> v;

    while(n--){
        int val; cin >> val;
        v.push_back(val);
        mul *= val;
    }

    if(k == 2){
        for(int &i : v){
            if(i % 2 == 0){
                cout << "0\n"; return;
            }
        }
        cout << "1\n"; return;
    }

    if(k == 4){
        int rem = 0, cnt = 0;
        for(int &i : v){
            if(i % 4 == 0){
                cout << "0\n"; return;
            }
            if(i % 2 == 0){
                cnt++;
            }
            rem = max(rem, i%4);
        }
        if(cnt >= 2){
            cout << "0\n"; return;
        }

        if(cnt == 1){
            cout << "1\n"; return;
        }

        if(cnt == 0){
            cout << min(4-rem, 2) << endl; return;
        }
        
    }

    if(k == 3){
        int rem = 0;
        for(int &i: v){
            if(i % 3 == 0){
                cout << "0\n"; return;
            }
            rem = max(rem, i%3);
        }

        cout << 3-rem << endl; return;
    }

    if(k == 5){
        int rem = 0;
        for(int &i: v){
            if(i % 5 == 0){
                cout << "0\n"; return;
            }
            rem = max(rem, i%5);
        }

        cout << 5-rem << endl; return;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}