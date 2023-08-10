#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int val; cin >> val;
        v.push_back(val);
    }


    vector<int> cv;
    cv = v;
    sort(cv.begin(), cv.end());




    for(int i=0; i<n; i++){
        if(v[i] == cv[n-1]){
            cout << i+1 << " " << cv[n-2];
            break;
        }
    }

    return 0;
}