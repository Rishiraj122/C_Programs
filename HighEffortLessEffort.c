#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
    return (a > b ? a : b);
}

int hili(int hi[], int li[], int n)
{
    int dp[n+1];
    dp[0]=0;
    dp[1]=hi[0];

    for(int i=2;i<n+1;i=i+1){
        dp[i]=max(dp[i-2]+hi[i-1], dp[i-1]+li[i-1]);
    }

    return dp[n];
}

int main()
{
    int testcases,n,*hi,*li;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d",&n);

        hi=(int*)malloc(sizeof(int)*n);
        li=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&hi[i]);
        }

        for(int i=0;i<n;i=i+1){
            scanf("%d",&li[i]);
        }

        printf("%d\n",hili(hi,li,n));

    }

return 0;
}