#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;

    while(1){
        int t = a;
        int sum = 0;
        while(t != 0){
            sum += t%10;
            t /= 10;
        }
        if(sum %b == 0){
            cout << a << endl;
            return;
        }
        a++;
    }
    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}