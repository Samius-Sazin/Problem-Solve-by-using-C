#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
long long arr[N];
int n;
long long m;

bool isWoodPossible(long long h){
    long long wood = 0;
    for(int i=1; i<=n; i++){
        if(arr[i] >= h){
            wood += (arr[i] - h);
        }
    }
    return wood >= m;
}

int main(){
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    long long si = 0, ei = 1e9, mid; 
    while(ei - si > 1){
        mid = ((ei-si)/2) + si;
        if(isWoodPossible(mid)){
            si = mid;
        }
        else{
            ei = mid - 1;
        }
    }
    
    if(isWoodPossible(ei)){
        cout << ei << endl;
    }
    else{
        cout << si << endl;
    }
}