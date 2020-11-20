#include<stdio.h>
#include<stdlib.h>

int main()
{
    int testcases;
    scanf("%d",&testcases);
    while(testcases--){
        
        int n;
        scanf("%d",&n);

        int dp[n+6];
        dp[0]=0;
        dp[1]=1;

        for(int i=2;i<=6;i=i+1){
            dp[i]=dp[i-1]*3;
        }

        dp[7]=726;

        for(int i=8;i<=n;i=i+1){
            dp[i]=(dp[i-1] - dp[i-6]*2/3)*3;
        }


        printf("%d\n",dp[n]);
        
    }
    
    return 0;
}