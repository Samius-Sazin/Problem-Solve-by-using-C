#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> v;

    for(int i=0; i<n; i++){
        v.push_back(vector<int>());
        for(int j=0; j<3; j++){
            int val; cin >> val;
            v[i].push_back(val);
        }

        if(v[i][0] > v[i][1]){
            cout << "First" << endl;
        }

        else if(v[i][0] < v[i][1]){
            cout << "Second" << endl;
        }

        else{
            if(v[i][2] % 2 == 0){
                cout << "Second" << endl;
            }
            else{
                cout << "First" << endl;
            }
        }
    }
}