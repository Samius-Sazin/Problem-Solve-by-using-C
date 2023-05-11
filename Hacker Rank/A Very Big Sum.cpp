#include<iostream>
using namespace std;

int main()
{
    long long int t, sum = 0;
    cin>>t;
    long long int arr[t];

    for(int i=0; i<t; i++)
    {
        cin>> arr[i];
        sum += arr[i];
    }

    cout<<sum<<endl;

    return 0;
}
