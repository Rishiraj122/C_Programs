#include<stdio.h>
#include<stdlib.h>

int non(int n){

    int dp[n+1][10];

    for(int i=0;i<=9;i=i+1){
        dp[0][i]=1;
    }
    for(int i=1;i<=n;i=i+1){
        dp[i][9]=1;
    }

    for(int i=1;i<=n;i=i+1){
        for(int j=8;j>=0;j=j-1){
            dp[i][j]=dp[i-1][j]+dp[i][j+1];
        }
    }

    return dp[n][0];
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",non(n));

return 0;
}