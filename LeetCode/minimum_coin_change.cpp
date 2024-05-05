#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    if(amount == 0){
        return 0;
    }
    
    sort(coins.begin(), coins.end());

    int dp[coins.size()+1][amount+1];

    for(int r=0; r<=coins.size(); r++){
        for(int c=0; c<=amount; c++){
            if(c == 0){
                dp[r][c] = 0;
            }
            else if(r == 0){
                dp[r][c] = 1e5;
            }
            else if(coins[r-1] > c){
                dp[r][c] = dp[r-1][c];
            }
            else{
                dp[r][c] = min(dp[r-1][c], dp[r][c-coins[r-1]]+1);
            }
        }
    }

    return dp[coins.size()][amount] > 1e4? -1: dp[coins.size()][amount];
}

int main(){
    cout << "Enter number of coins : ";
    int n; cin >> n;

    cout << "Enter Coins : ";
    vector <int> coins;
    for(int i=0; i<n; i++){
        int val; cin >> val;
        coins.push_back(val);
    }

    cout << "Enter Amount : ";
    int amount; cin >> amount;

    int ans = coinChange(coins, amount);
    if(ans == -1){
        cout << "Not Possible to make amount : " << amount << endl;
    }
    else{
        cout << "Minimum Coins Required : " << ans;
    }
}