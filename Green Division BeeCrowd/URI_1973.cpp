#include <iostream>
using namespace std;
int main()
{
    long long int n;
    long long int ttl_sheep = 0;
    scanf("%lld", &n);

    long long int arr[n];

    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        ttl_sheep += arr[i];
    }

    long long int i = 0;
    long long int attack = 0;
    long long int Count = 0;

    if (!arr[0])
        attack++;

    while (arr[i] && i >= 0 && i < n)
    {
        if (attack <= i)
            attack++;

        if (arr[i] % 2)
        {
            Count++;
            arr[i] = arr[i] - 1;
            i++;
        }
        else
        {
            Count++;
            arr[i] = arr[i] - 1;
            i--;
        }
    }

    cout << attack << " " << ttl_sheep - Count << endl;

    return 0;
}
