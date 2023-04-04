#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>





void recursive(int x, int n, int i, int max, int total, int *count)

{

    int new_total = total + pow(i,n);



    if(new_total > x)

        return;

    if(new_total == x)

    {

        *count += 1;

        return;

    }

    if(i > max)

        return;

    int j;

    for(j = i+1; j <= max; j++)

    {

        recursive(x, n, j, max, new_total, count);

    }

    return;

}



int nbr_of_poss(int x, int n)

{

    int max = sqrt(x);

    int count = 0;

    recursive(x, n, 0, max, 0, &count);

    return count;

}



int main()

{

    int x, n;

    scanf("%d%d", &x, &n);



    printf("%d", nbr_of_poss(x, n));

    return 0;

}



