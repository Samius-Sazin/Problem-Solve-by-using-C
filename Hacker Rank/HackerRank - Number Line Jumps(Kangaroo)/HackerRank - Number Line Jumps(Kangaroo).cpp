/*
HackerRank - Number Line Jumps(Kangaroo)
x1 v1 x2 v2
21 6  47 3 - NO
0  3  4  2 - YES

*/

#include<iostream>
using namespace std;

int main()
{
    int x1, v1, x2, v2;
    cin>> x1 >> v1 >> x2 >> v2;

    if(x2>x1 && v2>v1)
    {
        cout<<"NO\n";
        return 0;
    }
    int k1 = 0, k2 = 0;

    do
    {
        x1 += v1;
        x2 += v2;
        k1++;
        k2++;

        if(x1 > x2)
        {
            cout<<"NO\n";
            return 0;
        }

    }
    while(x1 != x2);

    cout<<"YES\n";

    return 0;
}
