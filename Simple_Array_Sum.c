//Given an array of integers, find the sum of its elements.

For example, if the array , , so return .
#include<stdio.h>
int main()
{
    int arr[10000];
    int n,i=0,sum=0;
    scanf("%d",&n);
    while (i<n)
    {
     scanf("%d",&arr[i]);
     //printf("%d",arr[i]);
     i++;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
    }

