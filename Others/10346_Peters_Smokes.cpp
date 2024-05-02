#include<iostream>
using namespace std;

int main(){
    int n, x;

    while(scanf("%d %d", &n, &x) == 2){
        int sum = n;
        int filter = 0;

        while(1){
            filter += (n % x);
            n = n / x;
            sum += n + filter/x;
        }

        cout << sum << endl;
    }
}