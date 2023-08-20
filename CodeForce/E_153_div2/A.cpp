#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;

    while(t--){
        string str; cin >> str;

        if(str == "()"){
            cout << "NO\n";
            continue;
        }

        int f = 0;
        for(int i=0; i<str.size(); i++){
            if(str[i] == str[i+1]){
                f = 1;
            }
        }

        cout << "YES\n";

        if(f == 1){
            for(int i=0; i<str.size(); i++){
                cout << "()";
            }
            cout << endl;
        }

        else{
            for(int i=0; i<str.size(); i++){
                cout << "(";
            }
            for(int i=0; i<str.size(); i++){
                cout << ")";
            }
            cout << endl;
        }
    }

    return 0;
}