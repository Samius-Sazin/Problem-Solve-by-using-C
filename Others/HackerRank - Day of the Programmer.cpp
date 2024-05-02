#include<iostream>
using namespace std;

int main()
{
    int year;
    cin>> year;

    if(year == 1918)
    {
        cout<<"26.09."<<year<<endl;//31 + 15 + 31 + 30 + 31 + 30 + 31 + 31 = 230
    }                             //256-230=26

    if(year>=1700 && year<1918) //Julian calendar
    {
        if(year%4 == 0)
        {
            cout<<"12.09."<<year<<endl;
        }
        else
        {
            cout<<"13.09."<<year<<endl;
        }
    }


    else if(year>1918 && year<=2700)//Gregorian calendar system
    {
        if((year%400==0) || ((year%4==0) && (year%100!=0)))
        {
            cout<<"12.09."<<year<<endl;
        }
        else
        {
            cout<<"13.09."<<year<<endl;
        }
    }

    return 0;
}
