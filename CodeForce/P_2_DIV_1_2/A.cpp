#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, a, q;
        cin >> n >> a >> q;

        string s; cin >> s;

        if(n == a){
            cout << "YES\n";
            continue;
        }

        int count_pos = 0, count_neg = 0;
        for(int i=0; i<q; i++){
            if(s[i]=='+'){
                count_pos++;
            }
            else{
                count_neg++;
            }

            if(count_pos-count_neg+a >= n){
                cout << "YES\n";
                break;
            }
        }

        if(a+count_pos >= n){
            if(count_pos-count_neg+a < n){
                cout << "MAYBE\n";
            }
        }
        else{
            cout << "NO\n";
        }
    }
}