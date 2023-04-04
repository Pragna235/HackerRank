#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()

{

    long long string=0, sum;

    int k,c;

    do{

        c=getchar();

        if(c!=' ')

        {

            string+=c-'0';

        }

    }while(c!=' ');

    scanf("%d",&k);

    string *=k;



    while(string>10)

    {

        sum=0;

        while(string>0)

        {

            sum+=string%10;

            string=string/10;

        }

        string=sum;

    }

    printf("%lld\n",string);

    return 0;

}

