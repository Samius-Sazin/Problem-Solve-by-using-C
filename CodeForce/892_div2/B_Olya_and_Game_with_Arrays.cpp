#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long int n; cin >> n;
        vector<vector<long long int>> v;
        vector<long long int>xx;
        long long int min_among_all = INT_MAX;
        long long int second_min = INT_MAX;

        long long int sum_secont_min = 0;

        for(int i=0; i<n; i++){
            int x; cin >> x;

            v.push_back(vector<long long int>());

            for(int j=0; j<x; j++){
                long long int val; cin >> val;
                v[i].push_back(val);
            }

            sort(v[i].begin(), v[i].end());

            min_among_all = min(min_among_all, v[i][0]);

            second_min = min(second_min, v[i][1]);
            xx.push_back(v[i][1]);
            
        }

        sort(xx.begin(), xx.end());

        long long int ans = 0;
        
        for(int i=1; i<xx.size(); i++){
            ans += xx[i];
        }
        cout << ans+min_among_all << endl;

    }
}
