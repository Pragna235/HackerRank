#include <stdio.h>
int main()
{
    int  candles[100000],count=1,max,i;
    long int n;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&candles[i]);
    }

    max=candles[0];
    for(i=1;i<n;i++)
    {
        if(candles[i]>max)
           max=candles[i];
        else if (candles[i]==max)
           count++;
        continue;
    }
    printf("%d",count);
    return 0;
}

