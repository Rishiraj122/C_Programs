#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
    return (a>b? a:b);
}

int main()
{
    int n,*arr,dp[30],testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        arr=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&arr[i]);
        }

        dp[0]=0;
        dp[1]=arr[0];

        for(int i=2;i<=n;i=i+1){
            dp[i]=max(dp[i-2]+arr[i-1], dp[i-1]);
        }

        printf("%d\n",dp[n]);
        
    }

return 0;
}