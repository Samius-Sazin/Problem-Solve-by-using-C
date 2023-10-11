#include<bits/stdc++.h>
using namespace std;

void solve(){
    char arr[10][10];
    int points = 0;
    for(int r=0;r<10; r++){
        for(int c=0; c<10; c++){
            cin >> arr[r][c];
            if(arr[r][c] == 'X'){
                if(r==0 || r==9 || c==0 || c==9){
                    points += 1;
                }
                else if(r==1 || r==8 || c==1 || c==8){
                    points += 2;
                }
                else if(r==2 || r==7 || c==2 || c==7){
                    points += 3;
                }
                else if(r==3 || r==6 || c==3 || c==6){
                    points += 4;
                }
                else if(r==4 || r==5 || c==4 || c==5){
                    points += 5;
                }
            }
        }
    }
    cout << points << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}