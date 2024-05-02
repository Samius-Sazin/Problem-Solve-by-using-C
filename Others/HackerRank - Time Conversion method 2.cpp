#include <iostream>
using namespace std;

int main()
{
    int hour, minute, second;
    char c1, c2;
    scanf("%d:%d:%d%c%c",&hour, &minute, &second, &c1, &c2);

    hour %= 12;

    if(c1 == 'P') hour += 12;

    printf("%02d:%02d:%02d\n", hour, minute, second);

    return 0;
}
