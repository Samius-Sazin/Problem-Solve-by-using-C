#include <iostream>
#include <string.h>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while(N--)
    {
        string str;
        cin.ignore(); // clear input buffer
        getline(cin, str);//take string input

        //declare an array
        //Size - I need index 97 - 122, initialize every index with 0.
        int arr[130] = {0};

        //convert every uppercasse to lowercase later
        transform(str.begin(), str.end(), str.begin(),::tolower);
        //sort the string alphaabaticaly
        sort(str.begin(), str.end());

        //Hashing
        for (int i = 0; i < str.length(); i++)
        {
            arr[str[i]]++;
        }

        //Finding the maximmum number from arr.
        int mx = -1;
        for (int i = 97; i <= 122; i++)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
        }

        //print characters 
        for (int i = 97; i <= 122; i++)
        {
            if (arr[i] == mx)
            {
                cout << char(i);
            }
        }
        cout << endl;
    }

    return 0;
}