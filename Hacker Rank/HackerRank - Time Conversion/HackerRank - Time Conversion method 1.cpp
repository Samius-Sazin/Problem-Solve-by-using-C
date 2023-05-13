#include<iostream>
using namespace std;


int main()
{
    string time, x="";
    cin>> time;

    if(time[8] == 'A')
    {
        if(time[0] == '1' && time[1] == '2')
        {
            time[0] = '0';
            time[1] = '0';
        }

    }
    else
    {
        if(time[1]=='8' || time[1]=='9')
        {
            time[0] = '2';
            if(time[1]=='8') time[1]='0';
            else time[1]='1';
        }

        else if(time[0]!='1' || time[1]!='2')
        {
            time[0]++;
            time[1] += 2;
        }
    }

    for(int i=0; i<8; i++)
        cout<<time[i];
    cout<<endl;
    return 0;
}
