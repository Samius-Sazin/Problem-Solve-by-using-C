#include<bits/stdc++.h>
using namespace std;

int main(){
    int coins[11] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};
    long long arr[12][6001];

    for(int r=0; r<12; r++){
        for(int c=0; c<6001; c++){
            if(c == 0){
                arr[r][c] = 1;
                continue;
            }
            if(r == 0){
                arr[r][c] = 0;
                continue;
            }
            if(coins[r-1] > c){
                arr[r][c] = arr[r-1][c];
            }
            else{
                arr[r][c] = arr[r-1][c] + arr[r][c - coins[r-1]];
            }
        }
    }

    double s;
    int ammount;
    while(scanf("%lf", &s) && s!=0){
        ammount = int(s * 20);

        cout << setw(6) << right << fixed << setprecision(2) << s;
        cout << setw(17) << right << arr[11][ammount] << endl;
    }
    return 0;
}