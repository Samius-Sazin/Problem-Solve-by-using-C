#include<iostream>
using namespace std;

int main()
{
    int t, p=0, n=0, z=0;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
        if(arr[i] > 0) p++;
        else if(arr[i] < 0) n++;
        else z++;
    }
    cout << (float)p/t << endl << (float)n/t << endl << (float)z/t << endl;

    return 0;
}
