#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,A[100],iTemp;
    float minus = 0,zeros = 0,plus = 0;
    scanf("%d",&N);
    for(iTemp=0;iTemp<N;iTemp++)
    {
        scanf("%d",&A[iTemp]);
        if(A[iTemp] > 0)
        {
            plus++;
        }
        else if(A[iTemp] == 0)
        {
            zeros++;
        }
        else
        {
            minus++;
        }

    }
    printf("%.3f\n%.3f\n%.3f\n",plus/N,minus/N, zeros/N);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

