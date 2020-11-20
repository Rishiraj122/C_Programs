#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
    return (a>b? a:b);
}

int AlternatingSubsequence(int n, int arr[] )
{

    int dp[n][2],b=0;

    for(int i=0;i<n;i=i+1){
        dp[i][0]=dp[i][1]=1;
    }

    for(int i=1;i<n;i=i+1){
        for(int j=0;j<i;j=j+1){
            if(arr[j]<arr[i] && dp[i][0]<dp[j][1]+1){
                dp[i][0]=dp[j][1]+1;
            }
            else if(arr[j]>arr[i] && dp[i][1]<dp[j][0]+1){
                dp[i][1]=dp[j][0]+1;
            }
        }
        
        if(b<max(dp[i][0],dp[i][1])){
            b=max(dp[i][0],dp[i][1]);
        }

    }

    return b;
}

int main()
{
    int testcases;

    scanf("%d",&testcases);

    while(testcases--){

        int n,*arr;

        scanf("%d",&n);
        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        printf("%d\n",AlternatingSubsequence(n,arr));
    }

return 0;
}