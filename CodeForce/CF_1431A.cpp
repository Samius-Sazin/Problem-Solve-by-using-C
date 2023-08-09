#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<long long int>> v;

    int t; cin >> t;

    for(int i=0; i<t; i++){
        int n; cin >> n;
        v.push_back(vector<long long int>());
        for(int j=0; j<n; j++){
            int val; cin >> val;
            v[i].push_back(val);
        }

        long long int maxx = INT_MIN;
        for(int k=0; k<v[i].size(); k++){
            long long int best_price = v[i][k];
            long long int count = 0;
            for(int l=0; l<v[i].size(); l++){
                if(v[i][l] >= best_price){
                    count++;
                }
            }
            count *= best_price;
            maxx = max(maxx, count);
        }

        cout << maxx << endl;
    }

    return 0;
}
