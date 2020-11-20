#include<stdio.h>
#include<stdlib.h>

int LCS(char arr[], char b[], int n, int m){

    int dp[n+1][m+1];

    for (int i = 0; i <= m; ++i) 
        dp[0][i] = 0; 
   
    for (int i = 0; i <= n; ++i) 
        dp[i][0] = 1; 




    for(int i=1;i<n+1;i=i+1){
        for(int j=1;j<m+1;j=j+1){
            if(arr[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    return dp[n][m];

}

int main()
{
    int n,m,testcases;

    scanf("%d",&testcases);

    while(testcases--){
        
        char arr[200],b[200];
        scanf("%d%d",&n,&m);
        scanf("%s%s",&arr,&b);

        printf("%d\n",LCS(arr,b,n,m));

    }

return 0;
}