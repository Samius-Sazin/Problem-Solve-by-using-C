#include<iostream>
using namespace std;

int main()
{
    int C;
    cin >> C;

    char ch;
    cin >> ch;

    float arr[12][12];
    float sum = 0;
 
    for(int r=0; r<12; r++)
    {
        for(int c=0; c<12; c++)
        {
            cin >> arr[r][c];
            if(c == C)
            {
                sum += arr[r][c];
            }
        }
    }

    if(ch == 'S')
    {
       printf("%.1f\n", sum);
    }
    else if(ch == 'M')
    {
        printf("%.1f\n", sum/12);
    }

    return 0;
}
