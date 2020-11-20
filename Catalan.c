#include<stdio.h>
#include<stdlib.h>

long long int Catalan(int n)
{
    long long int dp[n+1];

    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i=i+1){
        
        dp[i]=0;
        
        for(int j=0;j<i;j=j+1){

            dp[i]=dp[i]+dp[j]*dp[i-j-1];
        
        }
    }

    return dp[n];

}

int main()
{
    int n,testcases;
    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);
        printf("%lld\n",Catalan(n));

    }

return 0;
}