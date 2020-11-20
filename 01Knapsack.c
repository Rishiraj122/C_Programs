#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
    return (a>b ? a:b);
}

int Knapsack(int n, int w, int* val, int* weg)
{
    int dp[n+1][w+1];

        for(int i=0; i <=n; i++){
            for(int j=0; j<=w;j=j+1){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
            }
        }

        for(int i=1;i<=n;i=i+1){
            for(int j=1;j<=w;j=j+1){
                if(j - weg[i-1] >= 0){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-weg[i-1]] + val[i-1]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    return dp[n][w];
}

int main()
{

    int testcases;
    scanf("%d",&testcases);

    while(testcases--){

        int n,w,*val,*weg,sum=0;
        scanf("%d",&n);
        scanf("%d",&w);

        val=(int*)malloc(sizeof(int)*n);
        weg=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&val[i]);
        }

        for(int i=0;i<n;i=i+1){
            scanf("%d",&weg[i]);
        }

        sum=Knapsack(n,w,val,weg);
        printf("%d\n",sum);
    }

return 0;
}