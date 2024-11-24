#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a; cin >> a;
    int b; cin >> b;

    while(b--){
        if((a[a.length()-1] - 48) == 0){
            int n = stoi(a);
            n /= 10;
            a = to_string(n);
        }
        else{
            int n = stoi(a);
            n -= 1;
            a = to_string(n);
        }
    }

    cout << a << endl;
}
