#include <bits/stdc++.h>
using namespace std;

string solve()
{
    int a, b, c; cin >> a >> b >> c;
    
    if(a == b && a == c){
        return "YES";
    }

    int mn = min(a, min(b,c));
    int cnt = 0;

    while(a != mn){
        a -= mn;
        cnt++;
        if(cnt > 3)
        {
            return "NO";
        }
    }
    while(b != mn){
        b -= mn;
        cnt++;
        if(cnt > 3)
        {
            return "NO";
        }
    }
    while(c != mn){
        c -= mn;
        cnt++;
        if(cnt > 3)
        {
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}