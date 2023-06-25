#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string str;
    while (cin >> str)
    {
        int arr[60] = {0};
        for (int i = 0; i < str.size(); i++)
        {
            arr[str[i]]++;
        }

        int mx = -1;
        for (int i = 48; i <= 57; i++)
        {
            mx = max(mx, arr[i]);
        }
        
        int x = -1;
        for (int i = 48; i <= 57; i++)
        {
            if (arr[i] == mx)
            {
                x = max(x, i-48);
            }
        }

        cout << x << endl;
    }

    return 0;
}