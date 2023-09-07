#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int diff = abs(a-b);

        if(diff % 2 == 0){
            diff = diff/2;
            if(diff % c == 0){
                cout << diff / c << endl;
            }
            else{
                cout << diff / c + 1 << endl;
            }
        }

        else{
            diff = diff/2;
            cout << diff / c + 1 << endl;
        }
    }
    
}