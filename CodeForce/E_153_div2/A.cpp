#include <bits/stdc++.h>
using namespace std;

//1st way to solve :

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        string a = "", b = "";

        for (int i = 0; i < str.size(); i++)
        {
            a += "()";
            b += "(";
        }
        for (int i = 0; i < str.size(); i++)
        {
            b += ")";
        }

        if (a.find(str) == string::npos)
        { // if condition is true that means str is not available in a string
            cout << "YES\n"
                 << a << endl;
        }

        else if (b.find(str) == string::npos)
        {
            cout << "YES\n"
                 << b << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}




// Another way

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--){
//         if(str == "()"){
//             cout << "NO\n";
//             continue;
//         }

//         int f = 0;
//         for(int i=0; i<str.size(); i++){
//             if(str[i] == str[i+1]){
//                 f = 1;
//             }
//         }

//         cout << "YES\n";

//         if(f == 1){
//             for(int i=0; i<str.size(); i++){
//                 cout << "()";
//             }
//             cout << endl;
//         }

//         else{
//             for(int i=0; i<str.size(); i++){
//                 cout << "(";
//             }
//             for(int i=0; i<str.size(); i++){
//                 cout << ")";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }
