#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n; cin >> n;

    int v[n];
    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    sort(v, v+n);

    int cnt = 0;
    int x = n-1;

    for(int i=n-2; i>=0; i--){
        if(v[i] * 2 <= v[x]){
            cnt++;
            x--;
        }
    }

    if(n%2 == 0){
        return (cnt > n/2) ? n/2 : n-cnt;
    }
    if(n%2 != 0){
        return (cnt > n/2) ? n/2 + 1 : n-cnt;
    }
}

int main(){
    cout << solve() << endl;
}