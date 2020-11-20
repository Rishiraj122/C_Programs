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

int RodCutting(int n, int arr[], int b[])
{
    int dp[200][200];

    for(int i=0;i<n+1;i=i+1){
        for(int j=0;j<n+1;j=j+1){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i=i+1){
        for(int j=1;j<n+1;j=j+1){
            if(b[i-1]<=j){
                dp[i][j]=max(arr[i-1]+dp[i][j-b[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    return dp[n][n];


}

int main()
{
    int n,*arr,*b;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    b=(int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
        b[i]=i+1;
    }
    printf("%d",RodCutting(n,arr,b));

return 0;
}