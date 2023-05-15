/*
Grading system
4
73 67 38 33
75 67 40 33
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>> a[i];

        if(a[i]<38)//mark less then 38 will remain same
        {
            continue;
        }

        if(a[i]%5 == 0)//mark like 60, 75, 90, 95 will remain same
        {
            continue;
        }

        int ans = (a[i]/5) + 1;//ans = (73/5)+1=15;
        ans  *= 5;//ans = 15*5 = 75;
        if(ans-a[i] < 3)//75-73=3, 3<3 true.
        {
            a[i]=ans;//change 73 to 75.
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<< a[i] << endl;
    }

    return 0;
}
