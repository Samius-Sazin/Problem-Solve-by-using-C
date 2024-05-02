#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[N][26];

int main(){
    int t; cin >> t;

    while(t--){
        int n, q; cin >> n >> q;
        string str; cin >> str;

        //Hashing, here [i+1], for 1 indexing
        memset(hsh, 0, sizeof(hsh));
        for(int i=0; i<n; i++){
            hsh[i+1][str[i] - 'a']++; 
        }
        //prefix sum
        for(int c=0; c<26; c++){
            for(int r=1; r<=n; r++){
                hsh[r][c] += hsh[r-1][c];
            }
        }

        while(q--){
            int l, r; cin >> l >> r;
            int odd_count = 0;
            for(int i=0; i<26; i++){
                int c = hsh[r][i] - hsh[l-1][i];
                if(c % 2 != 0){
                    odd_count++;
                }
            }

            if(odd_count > 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}