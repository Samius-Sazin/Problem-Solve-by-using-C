#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m], xrr[n];

    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> xrr[i];
    }

    for(int i=0; i<m-1; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            if(arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[xrr[i]-1] << endl;
    }

    return 0;
}
