#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n=5,min=0,max=0;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<(n-1);i++){
        min=min+arr[i];
    }
    for(int i=1;i<n;i++){
        max=max+arr[i];
    }
    cout<<min<<" "<<max;

}
