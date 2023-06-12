#include<iostream>
using namespace std;

bool check_sort(int *arr, int t)
{
    if(t==0 || t==1) return true;

    if(arr[0]<arr[1] && check_sort(arr+1, t-1) )
        return true;

    return false;

}

int main()
{
    int t, Count=0;
    while(1)
    {
        Count=0;
        cin>> t;
        if(t==0) break;
        int arr[t];

        while(1)
        {
            for(int i=0; i<t; i++)
            {
                cin>>arr[i];
            }
            Count++;

            if((check_sort(arr, t))) break;
        }

        cout<<Count<<endl;
    }


    return 0;
}
