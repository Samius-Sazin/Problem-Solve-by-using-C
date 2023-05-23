#include<iostream>
using namespace std;
int main()
{
    int n, k, sum=0;
    cin>> n >> k;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];

        sum += arr[i];
    }

    sum -= arr[k];
    sum /= 2;

    int b;
    cin>> b;

    if(b==sum)
    {
        cout<<"Bon Appetit\n";
    }

    else
    {
        cout<< b-sum <<endl;
    }

    return 0;
}
