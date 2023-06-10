#include<iostream>
using namespace std;

int main()
{
    int t,n, COUNT=0;
    cin>> t >> n;

    while(t--)
    {
        int arr[3];
        int Count = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] > 0) Count++;
        }
        if(Count == n) COUNT++;
    }

    cout << COUNT << endl;

    return 0;
}
