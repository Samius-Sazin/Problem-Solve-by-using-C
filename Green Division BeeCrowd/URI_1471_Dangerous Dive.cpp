#include<iostream>
using namespace std;

int main()
{
    int n, r;

    while(scanf("%d %d", &n, &r) != EOF)
    {
        int c=0;
        int arr[r];
        int xrr[n+1] = {0};

        for(int i=0; i<r; i++)
        {
            cin>> arr[i];

            xrr[arr[i]]++;
        }

        for(int i=1; i<n+1; i++)
        {
            if(xrr[i]==0)
            {
                c++;
                cout<< i;

                if(xrr[i] != n)
                {
                    cout<<" ";
                }
            }
        }
        if(c==0) cout<<"*";
        cout<<endl;
    }


    return 0;
}
