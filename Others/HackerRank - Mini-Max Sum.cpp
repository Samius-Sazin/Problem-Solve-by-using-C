#include<iostream>
using namespace std;

int main()
{
    long long int i, j, temp, min;
    long long int arr[5], s[5]= {0,0,0,0,0};
    for(int i=0; i<5; i++)
        cin>>arr[i];

    for(int i=0; i<5; i++)
    {
        if(i != 0) s[0] += arr[i];
        if(i != 1) s[1] += arr[i];
        if(i != 2) s[2] += arr[i];
        if(i != 3) s[3] += arr[i];
        if(i != 4) s[4] += arr[i];
    }

    //Selection Sort
    for(i=0; i<4; i++)
    {
        min = i;
        for(j=i+1; j<5; j++)
        {
            if(s[j] < s[min])
                min = j;
        }
        if(min != i)
        {
            temp = s[i];
            s[i] = s[min];
            s[min] = temp;
        }
    }

    cout<<s[0]<<" "<<s[4]<<endl;

    return 0;
}
