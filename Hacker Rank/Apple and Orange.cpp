#include<iostream>
using namespace std;

int main()
{
    long long int s, e, pos_a, pos_o, num_a, num_o, apple = 0, orange = 0;
    cin>> s >> e >> pos_a >> pos_o >> num_a >> num_o;
    long long int A[num_a], O[num_o];

    for(int i=0; i<num_a; i++)
    {
        cin>>A[i];
        if((pos_a + A[i]) >= s  &&   (pos_a + A[i]) <= e) apple++;
    }

    for(int i=0; i<num_o; i++)
    {
        cin>>O[i];
        if((pos_o + O[i]) <= e  &&  (pos_o + O[i]) >= s) orange++;
    }

    cout<< apple <<endl<< orange <<endl;

    return 0;
}
