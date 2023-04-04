#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n,k,b,sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=k){
            sum=sum+arr[i];
        }

    }
    cin>>b;
    sum=sum/2;
    if(sum==b){
        cout<<"Bon Appetit";
    }
    else{
        cout<<abs(sum-b);
    }



}
