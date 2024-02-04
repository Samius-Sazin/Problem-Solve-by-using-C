#include<bits/stdc++.h>
using namespace std;

void solve(){
    int num; cin >> num;

    vector <int> v;
    for(int i=0; i<num; i++){
        int val; cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    int mid = num/2;
    int cnt = num;
    int j = mid;
    int i = 0;

    while (i < num/2 && j<num)
    {
        if(v[j] >= v[i] * 2){
            cnt--;
            i++;
        }
        j++;
    }
    
    // for(int i=0; i<num/2; i++){
    //     for(j=mid; j<num; j++){
    //         if(v[j] >= v[i] * 2){
    //             cnt--;
    //             break;
    //         }
    //     }
    //     mid = j+1;
    // }

    cout << cnt << endl;
}

int main(){
    solve();
}