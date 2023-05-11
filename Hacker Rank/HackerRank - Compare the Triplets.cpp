#include<iostream>
using namespace std;

int main()
{
    int Alice[3], Bob[3], Point_Alice=0, Point_Bob=0;

    for(int i=0; i<3; i++)
        cin>> Alice[i];

    for(int i=0; i<3; i++)
        cin>> Bob[i];

    for(int i=0; i<3; i++)
    {
        if(Alice[i] > Bob[i]) Point_Alice++;
        else if(Alice[i] < Bob[i]) Point_Bob++;
    }

    cout<< Point_Alice <<" "<< Point_Bob <<endl;

    return 0;
}
