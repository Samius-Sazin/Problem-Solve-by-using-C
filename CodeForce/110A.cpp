#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    // string n; cin >> n;
    // int cnt = 0;

    // for(int i = 0; i < n.length(); i++){
    //     if(n[i] == '4' || n[i] == '7'){
    //         cnt++;
    //     }
    // }

    // if(cnt == 4 || cnt == 7) cout << "YES\n";
    // else cout << "NO\n";

    // Efficient way
    long long n;
    cin >> n;
    int cnt = 0;

    while (n > 0)
    {

        if (n % 10 == 4 || n % 10 == 7)
        {
            cnt++;
        }
        n /= 10;
    }

    if(cnt == 4 || cnt == 7) cout << "YES\n";
    else cout << "NO\n";
}