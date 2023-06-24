#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int n1 = 2, n2 = 3, fib = 0, Count = 0;

    while(Count <= n)
    {
        fib = n1+n2;
        if(fib-n2 > 1)
        {
            for(int i=n2+1; i<fib; i++)
            {
                Count++;
                if(Count == n)
                {
                    cout << i << endl;
                }
            }
        }
        n1 = n2;
        n2 = fib;
    }

    return 0;
}