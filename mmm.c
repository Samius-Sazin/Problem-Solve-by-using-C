#include<stdio.h>
int main()
{
    int t,n[1001],min,j; //test case
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%d",&n[i]);
    }
    min=n[0];
    for(int i=1; i<t; i++)
    {
        if(n[i]<min)
        {
            min=n[i];
            j=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",j);

    return 0;
}
