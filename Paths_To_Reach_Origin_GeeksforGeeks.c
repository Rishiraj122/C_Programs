#include<stdio.h>
#include<stdlib.h>

int countPaths(int n, int m)
{
    int dp[n+1][m+1];
    for(int i=0;i<=n;i=i+1){
        dp[i][0]=1;
    }
    for(int j=0;j<=m;j=j+1){
        dp[0][j]=1;
    }

    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=m;j=j+1){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }

    return dp[n][m];

}

int main()
{
    int n,m,testcases;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d%d",&n,&m);
        printf("The answer is : %d\n",countPaths(n,m));
    }

return 0;
}