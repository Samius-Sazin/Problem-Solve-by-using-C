#include <iostream>
using namespace std;

int main()
{
    string str;
    int n;
    while (cin >> str >> n)
    {
        int c1 = 0;
        int ans = 0;
        int i = 0;
        while (str[i] != '\0')
        {
            if (str[i] == 'W')
            {
                ans++;
                if (c1 != 0)
                {
                    ans++;
                    c1 = 0;
                }
            }

            else if (str[i] == 'R')
            {
                c1++;
                if (c1 == n)
                {
                    c1 = 0;
                    ans++;
                }

                if (c1 != 0 && str[i + 1] == '\0')
                {
                    ans++;
                }
            }

            i++;
        }
        cout << ans << endl;
    }

    return 0;
}