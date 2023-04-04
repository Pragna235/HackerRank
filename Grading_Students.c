#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],pre;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<38)
        {
        continue;}

        pre=floor(arr[i]/5);
        if((5*(pre+1))-arr[i] < 3){
            arr[i]=(5*(pre+1));
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}
