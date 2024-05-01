#include<bits/stdc++.h>
using namespace std;

int solve(int coins, int amount){
    vector <int> v;
    int Count = 0;
    while(amount > 0){
        if(amount-coins >= 0)
        {
            amount -= coins;
            Count++;
        }
        else{
            coins = amount;
        }
    }
    return Count;
}

int main(){
    int coins, amount; cin >> coins >> amount;
    cout << solve(coins, amount) << endl;
}