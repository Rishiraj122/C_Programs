#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
    if(a<=b){
        return b;
    }

    else{
        return a;
    }
}

int UnboundedKnapscak(int n, int w, int wt[], int val[])
{
    int dp[101][101];

    for(int i=0;i<n+1;i=i+1){
        for(int j=0;j<w+1;j=j+1){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }

    for(int i=1;i<n+1;i=i+1){
        for(int j=1;j<w+1;j=j+1){
            if(wt[i-1]<=j){
                dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    for(int i=0;i<n+1;i=i+1){
        for(int j=0;j<w+1;j=j+1){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }

    return dp[n][w];

}


int main()
{
    int n,w,*val,*we,testcases;

    scanf("%d",&testcases);

    while(testcases--){

        scanf("%d%d",&n,&w);

        val=(int*)malloc(sizeof(int)*n);
        we=(int*)malloc(sizeof(int)*n);

        for(int i=0;i<n;i=i+1){
            scanf("%d",&val[i]);
        }

        for(int i=0;i<n;i=i+1){
            scanf("%d",&we[i]);
        }

        printf("%d\n",UnboundedKnapscak(n,w,we,val));
    }
return 0;
}