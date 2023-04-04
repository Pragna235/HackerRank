#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
    int x,n;
    cin>>x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<search(arr,n,x);
    return 0;
}

