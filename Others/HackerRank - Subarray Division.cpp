#include<iostream>
using namespace std;

int main()
{
    int n, d, m, Count=0;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    cin>> d >> m;

    for(int i=0; i<n; i++)
    {
        int sum = 0;
        if((i+m) <= n)
        {
            for(int j=i; j<m+i; j++)
            {
                sum += arr[i];
            }
            if(sum == d)
            {
                Count++;
            }
        }
    }

    cout<< Count << endl;

    return 0;
}
