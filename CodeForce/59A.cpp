#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}

int main(){
    string s; cin >> s;

    int c = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 97) {
            c++;
        }
    }

    if(c >= (s.length()-c) ){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    else{
        for(int i = 0; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
}
