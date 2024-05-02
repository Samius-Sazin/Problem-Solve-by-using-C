#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n, mx=INT_MIN;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
        if(mx < arr[i])
        {
            mx = arr[i];
        }
    }

    int xrr[mx+1];
    memset(xrr, 0, sizeof(xrr));

    for(int i=0; i<n; i++)
    {
        xrr[arr[i]]++;
    }

    int ans=0;
    for(int i=0; i<=mx+1; i++)
    {
        if(xrr[i]>1)
        {
            ans += xrr[i]/2;
        }
    }

    cout<<ans<<endl;

    return 0;
}
