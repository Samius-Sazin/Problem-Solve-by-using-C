#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    vector<string> v;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        v.push_back(s);
    }

    int ck = 0, ans = 0;
    for(int i=0; i<v[0].length(); i++){
        char ch = v[0][i];
        int count = 0;
        for(int j=0; j<n; j++){
            if(v[j][i] == ch){
                count++;
            }
            else{
                ck = 1;
                break;
            }
        }
        if(count == n){
            ans++;
        }
        if(ck == 1){
            break;
        }
    }

    cout << ans << endl;

    return 0;
}