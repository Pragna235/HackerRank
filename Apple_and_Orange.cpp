#include<iostream>
using namespace std;
int main(){
    int s,t,a,b,m,n,c1=0,c2=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int arr[m],brr[n];
    for(int i=0;i<m;i++){
        cin>>arr[i];
        arr[i]=arr[i]+a;
        if(arr[i]>=s && arr[i]<=t){
            c1++;
        }
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
        brr[i]=brr[i]+b;
        if(brr[i]>=s && brr[i]<=t)
        c2++;
    }
    cout<<c1<<endl<<c2;

}
