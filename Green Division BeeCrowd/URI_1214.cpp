#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int sum = 0;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        double avrg = (double)sum / n;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > avrg)
            {
                count++;
            }
        }

        double ans = (double)count / n * 100.0;

        printf("%.3f", ans);
        cout << "%\n";
    }
}