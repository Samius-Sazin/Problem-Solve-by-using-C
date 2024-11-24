#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}

int main(){
    string s; cin >> s;
    string h = "heidi";
    int c = 0;

    for(int i = 0, j = 0; i < s.length(); i++){
        if(s[i] == h[j]){
            c++;
            j++;
        }
        if(c == h.length()) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
