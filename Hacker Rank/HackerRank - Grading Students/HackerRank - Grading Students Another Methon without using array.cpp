/*
Grading system without array
4
73 67 38 33
75 67 40 33
*/

#include<iostream>
using namespace std;

int main()
{
    int n, grade, i;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> grade;

        if(grade < 38)
        {
            cout << grade << "\n";
            continue;
        }

        int rem = grade % 5; //73%5=3;
        if (5 - rem < 3) //5-3 = 2 < 3. true;
            grade += 5 - rem; //grade = 73+2=75
        cout << grade << "\n";//75
    }
    return 0;
}
