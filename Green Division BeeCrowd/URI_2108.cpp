#include <iostream>
using namespace std;

int main()
{

    string str, s1, s2=" ";
    while (1)
    {
        getline(cin, str);
        if (str[0] == '0')
        {
            break;
        }

        int i = 0;
        int Count = 0;
        int large = 0;
        while (str[i] != '\0')
        {
            if (str[i] != ' ')
            {
                Count++;
            }

            else
            {
                cout << Count << "-";
                Count = 0;
            }

            large = max(large, Count);

            i++;
        }
        cout << Count << endl;

        i = 0;
        Count = 0;
        int  index = 0;
        while (str[i] != '\0')
        {
            Count++;
            if (str[i] == ' ')
            {
                Count = 0;
            }

            if (Count == large)
                index = i;
            i++;
        }

        s1 = str.substr(index-large+1, large);
        if(s1.length() >= s2.length())
        {
            s2 = s1;
        }
    }
    cout << "\nThe biggest word: " << s2 << endl;

    return 0;
}