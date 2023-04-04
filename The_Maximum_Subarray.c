#include <stdio.h>
#include <stdlib.h>
long long dp[100000];

int main(){
  long long a,T,N,ans1,ans2,max,i;
  scanf("%lld",&T);
  while(T--){
    ans1=ans2=0;
    max=-999999;
    scanf("%lld",&N);
    for(i=0;i<N;i++){
      scanf("%lld",&a);
      if(a>max)
        max=a;
      if(a>0)
        ans2+=a;
      dp[i]=a;
      if(i && dp[i-1]>0)
        dp[i]+=dp[i-1];
      if(dp[i]>ans1)
        ans1=dp[i];
    }
    if(ans1==0)
      ans1=max;
    if(ans2==0)
      ans2=max;
    printf("%lld %lld\n",ans1,ans2);
  }
  return 0;
}








