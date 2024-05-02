#include<iostream>
using namespace std;

int main()
{
    int a1_size, a2_size, i;
    cin>> a1_size>> a2_size;
    int a1[a1_size], a2[a2_size];
    for( i=0; i<a1_size; i++)
    {
        cin>> a1[i];
    }

    int Max = INT_MIN;
    for( i=0; i<a1_size; i++)
    {
        cin>> a2[i];
        if(a2[i] > Max) Max=a2[i];
    }


    int j, k, factor=0;

    for(i=0; i<a1_size; i++)
    {
        for(j=1; j<=Max; j++
        {
            factor = j*a1[i];
        }

    }


    return 0;
}
