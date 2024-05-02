#include<iostream>
using namespace std;

int main()
{
    int size, Left_Diagonal=0, Right_Diagonal = 0;
    cin>>size;
    int arr[size][size];

    for(int r=0; r<size; r++)
    {
        for(int c=0; c<size; c++)
        {
            cin>> arr[r][c];

            if(r == c) Left_Diagonal += arr[r][c];

            if((r+c) == (size-1)) Right_Diagonal += arr[r][c];
        }
    }
    if(Left_Diagonal > Right_Diagonal)
        cout<<Left_Diagonal-Right_Diagonal<<endl;
    else
        cout<<Right_Diagonal - Left_Diagonal<<endl;

    return 0;
}
