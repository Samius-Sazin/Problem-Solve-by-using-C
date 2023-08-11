#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    int count = 0, i = 0;
    for(i=0; i<n-2; i++){
        if(v[i] == v[i+1] && v[i] != v[i+2] && v[i]!=0){
            count++;
            i += 1;
        }
        if(v[i] == v[i+1] && v[i] == v[i+2] && v[i]!=0){
            cout << "-1" << endl;
            return 0;
        }
    }

    if(i < n-1 && v[i] == v[i+1] && v[i]!=0){
        count++;
    }

    cout << count << endl;

    return 0;
}