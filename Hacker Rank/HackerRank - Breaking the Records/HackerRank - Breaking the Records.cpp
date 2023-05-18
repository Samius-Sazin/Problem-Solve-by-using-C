/*
HackerRank - Breaking the Records

9
10 5 20 20 4 5 2 25 1
2 4

*/

#include<iostream>
using namespace std;
int main()
{
    int n; //n = array size
    cin >> n;
    int arr[n]; // declare the array

    for(int i=0; i<n; i++) //taking input from user
        cin>> arr[i];

    int mx = arr[0]; //assign max and min score by first array element
    int mn = arr[0];

    int mx_count=0, mn_count=0;

    for(int i=1; i<n; i++)
    {
        if(arr[i] > mx)
        {
            mx = arr[i];
            mx_count++;
        }

        else if(arr[i] < mn)
        {
            mn = arr[i];
            mn_count++;
        }
    }

    cout<< mx_count <<" "<< mn_count <<endl;

    return 0;
}
