#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1, s2; cin >> s1 >> s2;

    int LCS[s1.size()+1][s2.size()+1];

    for(int r=0; r<=s1.size(); r++){
        for(int c=0; c<=s2.size(); c++){
            if(r==0 || c==0){
                LCS[r][c] = 0;
            }
            else if(s1[r-1] == s2[c-1]){
                LCS[r][c] = LCS[r-1][c-1] + 1;
            }
            else{
                LCS[r][c] = max(LCS[r][c-1], LCS[r-1][c]);
            }
        }
    }
    
    int length = LCS[s1.size()][s2.size()];
    char subSeq[length + 1];
    subSeq[length] = '\0';
    int r = s1.size();
    int c = s2.size();

    while(r>0 || c>0){
        if(s1[r-1] == s2[c-1]){
            subSeq[length-1] = s1[r-1];
            length--;
            r--;
            c--;
        }
        else if(LCS[r][c] == LCS[r][c-1]){
                c--;
        }
        else{
                r--;
        }
    }
    
    cout << subSeq << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
