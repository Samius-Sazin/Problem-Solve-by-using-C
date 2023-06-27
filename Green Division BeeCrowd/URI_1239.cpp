#include<iostream>
using namespace std;
int main()
{
    string str;
    while(getline(cin, str))
    {
        int c1 = 0;
        int c2 = 0;
        int i = 0;

        while(str[i] != '\0')
        {
            if(str[i] == '_')
            {
                c1++;
                if(c1 == 1)
                {
                    cout << "<i>" ;
                }
                else if(c1 == 2)
                {
                    c1 = 0;
                    cout << "</i>" ;
                }
            }

            else if(str[i] == '*')
            {
                c2++;
                if(c2 == 1)
                {
                    cout << "<b>" ;
                }
                else if(c2 == 2)
                {
                    c2 = 0;
                    cout << "</b>" ;
                }
            }

            else
            {
                cout << str[i] ;
            }

            i++;
        }
    }
    return 0;
}