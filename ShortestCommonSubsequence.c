#include<stdio.h>
#include<string.h>
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

int LCSAlgo(char arr[], char b[])
{
    int n,m;
    n=strlen(arr);
    m=strlen(b);

    int dp[n+1][m+1];

    for(int i=0;i<n+1;i=i+1){
        for(int j=0;j<m+1;j=j+1){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i=i+1){
        for(int j=1;j<m+1;j=j+1){
            if(arr[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return (n+m)-dp[n][m];

}

int main()
{
    int testcases;
    scanf("%d",&testcases);

    while(testcases--){

        char arr[200],b[200];

        scanf("%s",&arr);
        scanf("%s",&b);

        printf("%d\n",LCSAlgo(arr,b));

    }

return 0;
}