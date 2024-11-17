#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n, a, b; cin >> n >> a >> b;
    string str; cin >> str;

    int x = 0, y = 0, c = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'N'){
            y += 1;
        } 
        else if(str[i] == 'E'){
            x += 1;
        } 
        else if(str[i] == 'S'){
            y -= 1;
        } 
        else if(str[i] == 'W'){
            x -= 1;
        }
        
        if(i == str.length() -1){
            i = -1;
            c++;
        }

        if(x == a && y == b) return "YES";
        if(c == 100) return "NO";
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;;
    }
}
