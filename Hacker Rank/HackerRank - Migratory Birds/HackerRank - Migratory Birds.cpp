#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    int c[]= {0};

    for(int i=0; i<n; i++)
    {
        if(arr[i]==1) c[0]++;
        else if(arr[i]==2) c[1]++;
        else if(arr[i]==3) c[2]++;
        else if(arr[i]==4) c[3]++;
        else if(arr[i]==5) c[4]++;
    }

    int Max = c[0], ans=1;

    for(int i=1; i<5; i++)
    {
        if(Max < c[i])
        {
            Max = c[i];
            ans = i+1;
        }
    }

    cout<< ans;

    return 0;
}
