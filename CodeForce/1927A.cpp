#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string str; cin >> str;

    int i = 0;
    int j = n-1;

    int a = 0, b = 0;

    while(i < str.length() && str[i] != 'B'){
        i++;
    }
    if(i == n){
        cout << "0\n";
        return;
    }
    
    a = i;

    while(j > i && str[j] != 'B'){
        j--;
    }
    b = j;

    cout << b - a + 1<< endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}