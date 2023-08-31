#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;

        vector<string> v;
        int count = 0;

        for(int i=0; i<x; i++){
            string s; cin >> s;
            v.push_back(s);
        }

        for(int i=0; i<y; i++){
            for(int j=0; j<x; j++){
                if(count==0 && v[j][i] == 'v'){
                    count = 1;
                    break;
                }
                else if(count==1 && v[j][i] == 'i'){
                    count = 2;
                    break;
                }
                else if(count==2 && v[j][i] == 'k'){
                    count = 3;
                    break;
                }
                else if(count==3 && v[j][i] == 'a'){
                    count = 4;
                    break;
                }
            }
            if(count == 4){
                cout << "YES\n";
                break; 
            }
        }
        if(count != 4){
            cout << "NO\n";
        }
    }
}