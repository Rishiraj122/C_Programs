#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int result(char arr[],int n)
{
    int dp[n+1][n+1];
    for(int i=0;i<=n;i=i+1){
        for(int j=0;j<=n;j=j+1){
            dp[i][j]=0;
        }
    }

    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=n;j=j+1){
            if(arr[i-1]==arr[j-1] && i!=j){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][n];
}


int main()
{
    int n,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);
        char arr[n+1];

        scanf("%s",&arr);

        printf("%d",result(arr,n));

    }

    return 0;
}